//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface BBObjectCache : NSObject
{
    struct _opaque_pthread_mutex_t {
        long __sig;
        char __opaque[40];
    } _cacheMutex;
    NSMutableDictionary *_cache;
    NSString *_identifier;
}

+ (id)description;
+ (id)objectCacheForIdentifier:(id)arg1;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)removeCachedObject:(id)arg1;
- (id)cachedObjectForUniqueID:(id)arg1;
- (id)cacheObject:(id)arg1;
- (id)_descriptionForObject:(id)arg1 uniqueID:(id)arg2;
- (id)debugDescription;
- (id)description;
- (void)dealloc;
- (id)init;

@end
