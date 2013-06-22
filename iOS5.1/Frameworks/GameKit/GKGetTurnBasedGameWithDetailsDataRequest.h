/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKDataRequest.h>

@class GKTurnBasedMatch, NSString;

@interface GKGetTurnBasedGameWithDetailsDataRequest : GKDataRequest
{
    NSString *_sessionID;
    GKTurnBasedMatch *_match;
}

@property(retain, nonatomic) GKTurnBasedMatch *match; // @synthesize match=_match;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void)handleResponseFromServer:(id)arg1;
- (id)request;
- (id)key;
- (void)dealloc;

@end
