/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayer/MPVideoOverlay.h>

#import "MPNowPlayingItemQueueInfoButtonDelegate-Protocol.h"

@class MPInlineTransportControls, MPNowPlayingItemQueueInfoButton;

@interface MPInlineVideoOverlay : MPVideoOverlay <MPNowPlayingItemQueueInfoButtonDelegate>
{
    MPInlineTransportControls *_transportControls;
    MPNowPlayingItemQueueInfoButton *_itemQueueInfoButton;
    unsigned int _layoutSubviewsActive:1;
}

- (unsigned long long)_convertedPartsMask:(unsigned long long)arg1;
- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (void)setVideoViewController:(id)arg1;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setItem:(id)arg1;
- (void)setAllowsWirelessPlayback:(BOOL)arg1;
- (BOOL)allowsWirelessPlayback;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)crossedTimeMakerWithEvent:(id)arg1;
- (void)_configureLinkButtonForCurrentItemTime;
- (int)nowPlayingItemQueueInfoButton:(id)arg1 willDisplayInfoType:(int)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

