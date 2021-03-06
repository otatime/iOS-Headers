/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface VMUSymbolOwner : NSObject <NSCopying>
{
    NSString *_name;
    NSDictionary *_signature;
    id <VMUMemory> _textMemory;
    NSArray *_regions;
    NSArray *_symbols;
    NSArray *_sourceInfos;
    unsigned int _flags;
    unsigned int _currentVersion;
    unsigned int _compatibilityVersion;
}

+ (id)symbolOwnerWithName:(id)arg1 signature:(id)arg2 textMemory:(id)arg3 regions:(id)arg4 symbols:(id)arg5 sourceInfos:(id)arg6 flags:(unsigned int)arg7 currentVersion:(unsigned int)arg8 compatibilityVersion:(unsigned int)arg9;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (int)compare:(id)arg1;
- (BOOL)isEqualToSymbolOwner:(id)arg1;
- (BOOL)isDsym;
- (BOOL)isBundle;
- (BOOL)isDyld;
- (BOOL)isDylib;
- (BOOL)isAOut;
- (BOOL)isCommpage;
- (BOOL)isPEF;
- (BOOL)isProtected;
- (BOOL)isMachO;
- (unsigned int)compatibilityVersion;
- (unsigned int)currentVersion;
- (unsigned int)flags;
- (id)sourceInfosInAddressRange:(struct _VMURange)arg1;
- (id)symbolsInAddressRange:(struct _VMURange)arg1;
- (id)sourceInfos;
- (id)symbols;
- (id)sourceInfoForAddress:(unsigned long long)arg1;
- (id)symbolsForMangledName:(id)arg1;
- (id)symbolForName:(id)arg1;
- (id)symbolsForName:(id)arg1;
- (id)symbolForAddress:(unsigned long long)arg1;
- (id)regionForAddress:(unsigned long long)arg1;
- (id)regionsForName:(id)arg1;
- (id)regions;
- (BOOL)containsAddress:(unsigned long long)arg1;
- (id)architecture;
- (id)path;
- (id)signature;
- (id)name;
- (id)initWithName:(id)arg1 signature:(id)arg2 textMemory:(id)arg3 regions:(id)arg4 symbols:(id)arg5 sourceInfos:(id)arg6 flags:(unsigned int)arg7 currentVersion:(unsigned int)arg8 compatibilityVersion:(unsigned int)arg9;
- (BOOL)validate;
- (unsigned long long)size;
- (id)programTextForAddressRange:(struct _VMURange)arg1;
- (id)programTextForAddress:(unsigned long long)arg1;
- (void)slideToSegmentAddresses:(id)arg1;
- (id)symbolOwnerByAddingContentsOfOwner:(id)arg1;
- (BOOL)isLazy;

@end

