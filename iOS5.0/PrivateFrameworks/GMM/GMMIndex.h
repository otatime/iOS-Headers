/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@interface GMMIndex : PBCodable
{
    int _tileXIndex;
    int _tileYIndex;
    BOOL _hasFace;
    int _face;
}

@property(nonatomic) int face; // @synthesize face=_face;
@property(nonatomic) BOOL hasFace; // @synthesize hasFace=_hasFace;
@property(nonatomic) int tileYIndex; // @synthesize tileYIndex=_tileYIndex;
@property(nonatomic) int tileXIndex; // @synthesize tileXIndex=_tileXIndex;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)dealloc;

@end
