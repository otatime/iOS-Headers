//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CalDAVCalendarServerShareItem : CoreDAVItem
{
    NSMutableSet *_shareesToRemove;
    NSMutableSet *_shareesToSet;
}

@property(readonly) NSMutableSet *shareesToSet; // @synthesize shareesToSet=_shareesToSet;
@property(readonly) NSMutableSet *shareesToRemove; // @synthesize shareesToRemove=_shareesToRemove;

@end

