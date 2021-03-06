//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSURL, NSUUID;

@interface NEFilterSource : NSObject
{
    BOOL _registered;
    int _status;
    NSURL *_url;
    int _direction;
    NSMutableData *_pendingData;
    NSUUID *_flowUUID;
    unsigned long long _socketIdentifier;
    unsigned long long _pendingDataStartIndex;
    unsigned long long _peekIndex;
    unsigned long long _passLength;
}

+ (BOOL)filterRequired;
+ (void)connectToAgentWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (unsigned int)filterUnit;
+ (unsigned int)checkPolicyFilterUnit;
+ (void)initializeGlobals;
@property unsigned long long passLength; // @synthesize passLength=_passLength;
@property unsigned long long peekIndex; // @synthesize peekIndex=_peekIndex;
@property unsigned long long pendingDataStartIndex; // @synthesize pendingDataStartIndex=_pendingDataStartIndex;
@property(retain) NSUUID *flowUUID; // @synthesize flowUUID=_flowUUID;
@property(retain) NSMutableData *pendingData; // @synthesize pendingData=_pendingData;
@property BOOL registered; // @synthesize registered=_registered;
@property(readonly) unsigned long long socketIdentifier; // @synthesize socketIdentifier=_socketIdentifier;
@property(readonly) int direction; // @synthesize direction=_direction;
@property(readonly) NSURL *url; // @synthesize url=_url;
@property(readonly) int status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)dataCompleteWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addData:(id)arg1 withCompletionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)sendDataToPluginWithConnection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithURL:(id)arg1 direction:(int)arg2 socketIdentifier:(unsigned long long)arg3;
- (void)prepareAgentWithHandler:(CDUnknownBlockType)arg1;

@end

