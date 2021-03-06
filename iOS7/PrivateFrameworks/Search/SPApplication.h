/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, SPSearchResult;

@interface SPApplication : NSObject
{
    NSString *_displayIdentifier;
    NSString *_displayName;
    NSString *_longDisplayName;
}

@property(retain, nonatomic) NSString *longDisplayName; // @synthesize longDisplayName=_longDisplayName;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *displayIdentifier; // @synthesize displayIdentifier=_displayIdentifier;
- (void)dealloc;
@property(readonly, nonatomic) SPSearchResult *searchResult;
- (id)description;

@end

