//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SSMetricsEventFieldProvider.h"

@class NSDictionary;

@interface RUMetricsDictionaryEventFieldProvider : NSObject <SSMetricsEventFieldProvider>
{
    NSDictionary *_dictionary;
}

@property(readonly, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void).cxx_destruct;
- (id)valueForMetricsField:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
