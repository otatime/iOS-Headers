//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSDictionary, NSString;

@interface NSException : NSObject <NSCopying, NSCoding>
{
    NSString *name;
    NSString *reason;
    NSDictionary *userInfo;
    id reserved;
}

+ (void)raise:(id)arg1 format:(id)arg2;
+ (void)raise:(id)arg1 format:(id)arg2 arguments:(char *)arg3;
+ (id)exceptionWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;
- (id)init;
- (void)raise;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)_installStackTraceKeyIfNeeded;
@property(readonly, copy) NSArray *callStackSymbols;
@property(readonly, copy) NSArray *callStackReturnAddresses;
@property(readonly, copy) NSDictionary *userInfo;
@property(readonly, copy) NSString *reason;
@property(readonly, copy) NSString *name;

@end
