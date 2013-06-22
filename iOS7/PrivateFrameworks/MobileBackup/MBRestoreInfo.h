/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface MBRestoreInfo : NSObject <NSCoding, NSCopying>
{
    NSDate *_date;
    BOOL _wasCloudRestore;
    NSString *_deviceBuildVersion;
    NSString *_backupBuildVersion;
}

@property(readonly) NSString *backupBuildVersion; // @synthesize backupBuildVersion=_backupBuildVersion;
@property(readonly) NSString *deviceBuildVersion; // @synthesize deviceBuildVersion=_deviceBuildVersion;
@property(readonly) BOOL wasCloudRestore; // @synthesize wasCloudRestore=_wasCloudRestore;
@property(readonly) NSDate *date; // @synthesize date=_date;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setBackupBuildVersion:(id)arg1;
- (void)setDeviceBuildVersion:(id)arg1;
- (void)setWasCloudRestore:(BOOL)arg1;
- (void)setDate:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end
