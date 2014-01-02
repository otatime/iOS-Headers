/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MPUDataSource.h"

#import "RUTrackHistoryDataSourceDelegate-Protocol.h"

@class NSArray, RUTrackHistoryDataSource;

@interface MusicRadioTrackHistoryDataSource : MPUDataSource <RUTrackHistoryDataSourceDelegate>
{
    RUTrackHistoryDataSource *_radioHistoryDataSource;
    NSArray *_trackHistories;
}

- (void).cxx_destruct;
- (void)trackHistoryDataSource:(id)arg1 didInsertTrackHistories:(id)arg2 updateTrackHistories:(id)arg3 deleteTrackHistories:(id)arg4;
@property(readonly, nonatomic) NSArray *trackHistories;
- (void)invalidateWithInsertedObjects:(id)arg1 updatedObjects:(id)arg2 deletedObjects:(id)arg3;
- (id)entities;
- (id)initWithEntityType:(long long)arg1;

@end
