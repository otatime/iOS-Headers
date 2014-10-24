//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSArray, NSString;

@interface RadioHistoryCategory : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_categoryDescription;
    NSArray *_items;
    NSString *_name;
    NSString *_stationHash;
    long long _stationID;
    int _type;
}

@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) long long stationID; // @synthesize stationID=_stationID;
@property(readonly, copy, nonatomic) NSString *stationHash; // @synthesize stationHash=_stationHash;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, copy, nonatomic) NSString *categoryDescription; // @synthesize categoryDescription=_categoryDescription;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;

@end
