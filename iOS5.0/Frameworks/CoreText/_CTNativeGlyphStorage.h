/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreText/_CTGlyphStorage.h>

@interface _CTNativeGlyphStorage : _CTGlyphStorage
{
    const int *_attachCounts;
    unsigned int _retainCount;
    struct GlyphStack *_stack;
    long _capacity;
    void *_preallocatedStorage;
}

+ (id)newWithCount:(long)arg1;
- (void)setCapacity:(long)arg1;
- (void)popGlyphAtIndex:(long)arg1;
- (void)pushGlyphAtIndex:(long)arg1;
- (void)initGlyphStackWithCapacity:(long)arg1;
- (void)moveGlyphsFromRange:(CDStruct_1ef3fb1f)arg1 toIndex:(long)arg2;
- (void)swapGlyphsAtIndex:(long)arg1 withIndex:(long)arg2;
- (void)insertGlyphsAtRange:(CDStruct_1ef3fb1f)arg1;
- (void)puntStringIndicesInRange:(CDStruct_1ef3fb1f)arg1 by:(long)arg2;
- (void)setStringIndex:(long)arg1 atIndex:(long)arg2;
- (void)setAdvance:(struct CGSize)arg1 atIndex:(long)arg2;
- (void)setGlyph:(unsigned short)arg1 atIndex:(long)arg2;
- (void)setProps:(unsigned int)arg1 atIndex:(long)arg2;
- (void)setAttachmentCount:(long)arg1 atIndex:(long)arg2;
- (long)attachmentCountAtIndex:(long)arg1;
- (const int *)stringIndices;
- (void)finalize;
- (void)dealloc;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)copyWithRange:(CDStruct_1ef3fb1f)arg1;
- (id)initWithCount:(long)arg1;
- (void)prepareWithCapacity:(long)arg1 preallocated:(_Bool)arg2;

@end
