//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIRuntimeConnection : NSObject <NSCoding>
{
    id source;
    id destination;
    NSString *label;
}

- (void)connectForSimulator;
- (void)connect;
- (void)setLabel:(id)arg1;
- (id)label;
- (void)setDestination:(id)arg1;
- (id)destination;
- (void)setSource:(id)arg1;
- (id)source;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

