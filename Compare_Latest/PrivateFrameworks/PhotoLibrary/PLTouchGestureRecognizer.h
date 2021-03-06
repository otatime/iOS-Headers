//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIGestureRecognizer.h"

@class UITouch;

@interface PLTouchGestureRecognizer : UIGestureRecognizer
{
    UITouch *_touch;
    struct CGPoint _previousLocation;
}

- (void)reset;
- (struct CGPoint)locationInView:(id)arg1;
- (struct CGPoint)translationInView:(id)arg1;
- (void)setTranslation:(struct CGPoint)arg1 inView:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

