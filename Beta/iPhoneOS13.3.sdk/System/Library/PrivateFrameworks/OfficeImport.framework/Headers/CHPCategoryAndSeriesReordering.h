/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EDProcessor.h>

__attribute__((visibility("hidden")))
@interface CHPCategoryAndSeriesReordering : EDProcessor

- (_Bool)isObjectSupported:(id)arg1;
- (void)applyProcessorToObject:(id)arg1 sheet:(id)arg2;
- (void)reorderCategoryAndSeries:(id)arg1 sheet:(id)arg2 clearAxisReversedFlag:(_Bool)arg3;
- (void)applyCategoryReorderingPreprocessor:(id)arg1;
- (_Bool)isObjectSupportedForSeriesReorderingPreprocessor:(id)arg1 isCategoryOrderReversed:(_Bool)arg2;
- (void)applySeriesReorderingPreprocessor:(id)arg1;
- (void)reorderSeriesCategory:(id)arg1 dataPointCount:(unsigned long long)arg2 byRow:(_Bool)arg3;
- (void)reorderData:(id)arg1 dataPointCount:(unsigned long long)arg2 byRow:(_Bool)arg3;
- (void)reorderValueProperties:(id)arg1 dataPointCount:(unsigned long long)arg2;
- (long long)reorderDataValues:(id)arg1 dataPointCount:(unsigned long long)arg2;
- (void)reorderDataFormula:(id)arg1 dataPointCount:(unsigned long long)arg2 byRow:(_Bool)arg3;

@end
