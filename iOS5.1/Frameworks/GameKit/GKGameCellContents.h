/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKMultilineCellContentView.h>

@class GKGame, GKGameRecord;

@interface GKGameCellContents : GKMultilineCellContentView
{
    GKGameRecord *_details;
    GKGameRecord *_localDetails;
    GKGame *_game;
}

+ (id)gameCellContentsWithTheme:(id)arg1;
+ (float)defaultRowHeight;
+ (int)lineCount;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
@property(retain, nonatomic) GKGameRecord *localDetails; // @synthesize localDetails=_localDetails;
@property(retain, nonatomic) GKGameRecord *details; // @synthesize details=_details;
- (void)refreshExpensiveContent;
- (void)updateIconFromCache;
- (id)textForLine:(int)arg1;
- (void)updateLines;
- (id)leaderboardStringWithGameRecord:(id)arg1 localGameRecord:(id)arg2;
- (id)achievementsStringWithGameRecord:(id)arg1;
- (void)configureLines;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithTheme:(id)arg1;

@end

