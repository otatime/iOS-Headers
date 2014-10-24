//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class TSTFormulaPredicate;

__attribute__((visibility("hidden")))
@interface TSTTableFilterRule : NSObject <NSCopying>
{
    TSTFormulaPredicate *mPredicate;
    BOOL mDisabled;
    BOOL mDoesNotNeedFormulaRewriteForImport;
}

+ (id)ruleWhereValuesInTable:(id)arg1 inColumn:(unsigned char)arg2 matchCell:(id)arg3;
+ (id)ruleWithFormulaPredicate:(id)arg1;
- (id)initFromArchive:(const struct FilterRuleArchive *)arg1;
- (void)encodeToArchive:(struct FilterRuleArchive *)arg1;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (id)localizedTextRepresentation;
- (id)p_formatDurationPredicate;
- (id)p_formatDatePredicate;
- (id)p_formatValuePredicate;
- (id)p_formatTextPredicate;
- (BOOL)matchesCell:(id)arg1;
- (unsigned char)columnIndexForFilterRuleInTableModel:(id)arg1;
- (BOOL)matchesRow:(unsigned short)arg1 withFormulaTableID:(struct __CFUUID *)arg2 withCalculationEngine:(id)arg3;
- (BOOL)needsFormulaRewriteForImport;
- (void)setDoesNotNeedFormulaRewriteForImport;
- (BOOL)needsThreshold;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (struct TSCEFormula *)formula;
- (id)predicate;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initRuleWhereValuesInTable:(id)arg1 inColumn:(unsigned char)arg2 matchCell:(id)arg3;
- (id)initWithFormulaPredicate:(id)arg1;

@end
