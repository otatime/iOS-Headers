/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebCore/DOMNode.h>

@class DOMCSSStyleDeclaration, DOMElement, NSString;

@interface DOMAttr : DOMNode
{
}

@property(readonly, copy) NSString *name;
@property(readonly) BOOL specified;
@property(copy) NSString *value;
@property(readonly, retain) DOMElement *ownerElement;
- (BOOL)isId;
@property(readonly, retain) DOMCSSStyleDeclaration *style;

@end

