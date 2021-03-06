/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class CKAggregateConversation, CKSummaryLabel, NSDate, NSString, UIDateLabel, UIImageView, UILabel;

@interface CKConversationListCell : UITableViewCell
{
    CKAggregateConversation *_conversation;
    UIDateLabel *_dateLabel;
    UILabel *_hitsLabel;
    CKSummaryLabel *_summaryLabel;
    CKSummaryLabel *_backupSummaryLabel;
    UIImageView *_unreadIndicatorImageView;
    UILabel *_fromLabel;
    UIImageView *_groupImageView;
    NSString *_searchSummaryText;
    int _searchMessageID;
    int _searchPartID;
    NSDate *_searchMessageDate;
}

+ (id)identifier;
+ (float)cellHeight;
- (id)initWithFrame:(struct CGRect)arg1 conversation:(id)arg2;
- (void)prepareForReuse;
- (void)updateFontSize;
@property(retain, nonatomic) CKAggregateConversation *conversation;
- (void)dealloc;
- (void)clearText;
- (void)updateContents;
- (void)updateWithSearchResult:(struct _CKSpotlightSearchResult *)arg1;
- (void)_createBackupSummaryLabel;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)willTransitionToState:(unsigned int)arg1;
- (void)didTransitionToState:(unsigned int)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) NSDate *searchMessageDate; // @synthesize searchMessageDate=_searchMessageDate;
@property(readonly, nonatomic) int searchPartID; // @synthesize searchPartID=_searchPartID;
@property(readonly, nonatomic) int searchMessageID; // @synthesize searchMessageID=_searchMessageID;

@end

