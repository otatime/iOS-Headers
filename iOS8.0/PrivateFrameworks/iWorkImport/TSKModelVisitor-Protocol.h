//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSCHChartDrawableInfo, TSDConnectionLineInfo, TSDGroupInfo, TSDImageInfo, TSDMovieInfo, TSDShapeInfo, TSTTableInfo, TSWPShapeInfo, TSWPStorage, TSWPTOCInfo;

@protocol TSKModelVisitor <NSObject>
- (void)visitTSWPTOCInfo:(TSWPTOCInfo *)arg1;
- (void)visitTSWPStorage:(TSWPStorage *)arg1;
- (void)visitTSWPShapeInfo:(TSWPShapeInfo *)arg1;
- (void)visitTSTTableInfo:(TSTTableInfo *)arg1;
- (void)visitTSDShapeInfo:(TSDShapeInfo *)arg1;
- (void)visitTSDMovieInfo:(TSDMovieInfo *)arg1;
- (void)visitTSDImageInfo:(TSDImageInfo *)arg1;
- (void)visitTSDGroupInfo:(TSDGroupInfo *)arg1;
- (void)visitTSDConnectionLineInfo:(TSDConnectionLineInfo *)arg1;
- (void)visitTSCHChartDrawableInfo:(TSCHChartDrawableInfo *)arg1;
@end
