//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, NSArray, TSDBitmapImageProvider, TSDFrame;

__attribute__((visibility("hidden")))
@interface TSDFrameRep : NSObject
{
    TSDFrame *mFrame;
    NSArray *mImages;
    NSArray *mMasks;
    TSDBitmapImageProvider *mAdornment;
    CALayer *mMaskLayer;
    BOOL mShouldEnableBlendMode;
}

- (void)p_adjustRepeatingLayer:(id)arg1 withImageRect:(struct CGRect)arg2 start:(float)arg3 end:(float)arg4 vertical:(BOOL)arg5;
- (void)p_setRepeatingLayerWithIndex:(unsigned int)arg1 sublayers:(id)arg2 maskLayers:(id)arg3 toRect:(struct CGRect)arg4 start:(float)arg5 end:(float)arg6;
- (void)p_setUnreplicatedLayerWithIndex:(unsigned int)arg1 sublayers:(id)arg2 maskLayers:(id)arg3 toRect:(struct CGRect)arg4;
- (id)p_createRepeatingLayerWithImage:(struct CGImage *)arg1 vertical:(BOOL)arg2 screenScale:(float)arg3;
- (void)p_addEdgeLayerForIndex:(unsigned int)arg1 toLayer:(id)arg2 maskLayer:(id)arg3;
- (void)p_addUnreplicatedLayerForIndex:(unsigned int)arg1 toLayer:(id)arg2 maskLayer:(id)arg3;
- (void)p_drawTiles:(id)arg1 inContext:(struct CGContext *)arg2 rect:(struct CGRect)arg3 start:(float)arg4 end:(float)arg5 vertical:(BOOL)arg6;
- (void)p_drawFrameIntoRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 withImages:(id)arg3 atViewScale:(float)arg4 isMask:(BOOL)arg5;
- (struct CGImage *)p_newRenderedFrameForMask:(BOOL)arg1 size:(struct CGSize)arg2 forCALayer:(BOOL)arg3 viewScale:(float)arg4;
- (struct CGImage *)p_newFrameForMask:(BOOL)arg1 size:(struct CGSize)arg2 forCALayer:(BOOL)arg3 viewScale:(float)arg4;
- (void)updateCALayer:(id)arg1 toRect:(struct CGRect)arg2 withRepLayer:(id)arg3 maskLayer:(id)arg4 viewScale:(float)arg5 maskLayerTransform:(struct CGAffineTransform)arg6;
- (id)applyToCALayer:(id)arg1 withRepLayer:(id)arg2 maskLayer:(id)arg3 viewScale:(float)arg4;
- (void)blendMaskBeforeRenderingImageInContext:(struct CGContext *)arg1;
- (void)applyMaskForRectWithCoverage:(struct CGRect)arg1 toContext:(struct CGContext *)arg2;
- (void)frameRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 withTotalScale:(float)arg3;
- (id)frame;
- (void)dealloc;
- (id)initWithTSDFrame:(id)arg1;

@end

