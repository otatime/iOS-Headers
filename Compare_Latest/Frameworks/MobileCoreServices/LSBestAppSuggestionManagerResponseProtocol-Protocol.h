//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSString, NSUUID;

@protocol LSBestAppSuggestionManagerResponseProtocol <NSObject>

@optional
- (void)notifyBestAppChanged:(NSUUID *)arg1 type:(unsigned int)arg2 options:(NSDictionary *)arg3 bundleIdentifier:(NSString *)arg4 activityType:(NSString *)arg5 when:(NSDate *)arg6 confidence:(double)arg7 deviceName:(NSString *)arg8 deviceIdentifier:(NSString *)arg9 deviceType:(NSString *)arg10;
@end
