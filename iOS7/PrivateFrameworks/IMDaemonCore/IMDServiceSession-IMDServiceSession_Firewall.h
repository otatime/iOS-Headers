/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IMDaemonCore/IMDServiceSession.h>

@interface IMDServiceSession (IMDServiceSession_Firewall)
+ (id)_firewallUserNotificationForService:(id)arg1;
- (void)userNotificationDidFinish:(id)arg1;
- (void)_handleFirewallUserNotificationDidFinish:(id)arg1;
- (_Bool)warnIfPortBlocked:(int)arg1 forAction:(id)arg2;
@end
