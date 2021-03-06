//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDSPushHandler, NSData, NSDictionary, NSString;

@protocol IDSPushHandlerDelegate <NSObject>

@optional
- (void)handler:(IDSPushHandler *)arg1 receivedOfflineMessagePendingForTopic:(NSString *)arg2 messageContext:(id)arg3;
- (void)handler:(IDSPushHandler *)arg1 didReceiveMessage:(NSDictionary *)arg2 forTopic:(NSString *)arg3 fromID:(NSString *)arg4 messageContext:(id)arg5;
- (void)handler:(IDSPushHandler *)arg1 pushTokenChanged:(NSData *)arg2;
@end

