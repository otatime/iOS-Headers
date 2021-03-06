/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet;

@interface HSSagaClient : NSObject
{
    BOOL _active;
    struct _xpc_connection_s *_connection;
    void *_connectionData;
    struct dispatch_queue_s *_connectionQueue;
    id _deauthenticationCompletionHandler;
    id _updateInProgressChangedHandler;
    BOOL _didLoadURLBag;
    NSMutableSet *_pendingArtworkRequests;
    unsigned int _updatePollingFrequency;
}

@property(copy, nonatomic) id updateInProgressChangedHandler; // @synthesize updateInProgressChangedHandler=_updateInProgressChangedHandler;
- (void)_serverUpdateInProgressDidChange;
- (void)_updateForPollingInterval;
- (void)_serverDidLaunch;
- (void)_scheduleUpdatePolling;
- (void)_loadURLBagWithCompletionHandler:(id)arg1;
- (void)_handleMessage:(unsigned long long)arg1 withResponse:(void *)arg2;
- (void)_cancelUpdatePolling;
- (void)updatePlaylistWithSagaID:(unsigned long long)arg1 itemSagaIDs:(id)arg2 queue:(struct dispatch_queue_s *)arg3 completionHandler:(id)arg4;
- (void)incrementItemProperty:(id)arg1 forSagaID:(unsigned long long)arg2;
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2;
- (void)resignActive;
- (void)removePlaylistWithSagaID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)loadUpdateProgressWithCompletionHandler:(id)arg1;
- (void)loadIsUpdateInProgressWithCompletionHandler:(id)arg1;
- (void)loadArtworkDataForSagaID:(unsigned long long)arg1;
- (void)isAuthenticatedWithQueue:(struct dispatch_queue_s *)arg1 completionHandler:(id)arg2;
- (void)isAuthenticatedWithCompletionHandler:(id)arg1;
- (void)deauthenticateWithCompletionHandler:(id)arg1;
- (void)becomeActive;
- (void)authenticateWithCompletionHandler:(id)arg1;
- (void)addPlaylistWithName:(id)arg1 completionHandler:(id)arg2;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 baseURL:(id)arg2 userAgent:(id)arg3 cookieHeaders:(id)arg4;
- (id)init;

@end

