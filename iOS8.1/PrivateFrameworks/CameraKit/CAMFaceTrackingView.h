//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CameraKit/CAMFocusView.h>

@interface CAMFaceTrackingView : CAMFocusView
{
    BOOL _isInFrame;
}

@property(nonatomic) BOOL isInFrame; // @synthesize isInFrame=_isInFrame;
- (void)animateToFrame:(struct CGRect)arg1;
- (void)fadeOut;
- (void)fadeIn;
- (id)_createBoundsAnimation;
- (id)_createContentsAnimation;
- (double)fadeOutDuration;
- (void)_loadImagesWithColor:(id)arg1 imageSize:(struct CGSize *)arg2;
- (id)init;

@end
