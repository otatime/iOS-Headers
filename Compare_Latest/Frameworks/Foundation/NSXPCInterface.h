/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, Protocol;

@interface NSXPCInterface : NSObject
{
    Protocol *_protocol;
    NSMutableDictionary *_methods;
    id _reserved1;
}

+ (id)signatureForBlock:(id)arg1;
+ (id)interfaceWithProtocol:(id)arg1;
- (id)_interfaceForArgument:(unsigned int)arg1 ofSelector:(id)arg2 reply:(BOOL)arg3;
- (id)_allowedClassesForSelector:(id)arg1 reply:(BOOL)arg2;
- (id)_verifiedMethodSignatureForReplyBlockOfSelector:(id)arg1;
- (id)_verifiedMethodSignatureForSelector:(id)arg1;
- (id)replyBlockSignatureForSelector:(SEL)arg1;
- (void)setReplyBlockSignature:(id)arg1 forSelector:(SEL)arg2;
- (Class)classForSelector:(SEL)arg1 argumentIndex:(unsigned int)arg2 ofReply:(BOOL)arg3;
- (void)setClass:(Class)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned int)arg3 ofReply:(BOOL)arg4;
- (id)interfaceForSelector:(SEL)arg1 argumentIndex:(unsigned int)arg2 ofReply:(BOOL)arg3;
- (void)setInterface:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned int)arg3 ofReply:(BOOL)arg4;
- (id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned int)arg2 ofReply:(BOOL)arg3;
- (void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned int)arg3 ofReply:(BOOL)arg4;
@property Protocol *protocol;
- (id)debugDescription;
- (void)dealloc;
- (id)init;

@end
