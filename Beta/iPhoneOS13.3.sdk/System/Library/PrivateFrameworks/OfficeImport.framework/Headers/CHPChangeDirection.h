/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EDProcessor.h>

__attribute__((visibility("hidden")))
@interface CHPChangeDirection : EDProcessor

- (_Bool)isObjectSupported:(id)arg1;
- (void)applyProcessorToObject:(id)arg1 sheet:(id)arg2;
- (void)changeChartDirection:(id)arg1 sheet:(id)arg2;
- (id)getSeriesCollectionForOrthogonalDirection:(id)arg1 forChart:(id)arg2;
- (void)cleanUpOldSeriesCollection:(id)arg1;
- (void)changeBarColumnDirection:(id)arg1;
- (id)getGraphicPropertiesForSeriesWithIndex:(unsigned long long)arg1 fromCollection:(id)arg2 isVaryColors:(_Bool)arg3 forChart:(id)arg4;
- (id)createNewSeriesCollectionForOrthogonalDirection:(id)arg1 forChart:(id)arg2;
- (void)mapSeriesCollection:(id)arg1 from:(id)arg2 forChart:(id)arg3;
- (void)addDataValue:(id)arg1 to:(id)arg2 withIndex:(unsigned long long)arg3;
- (void)mapSeriesValues:(id)arg1 to:(id)arg2 forIndex:(unsigned long long)arg3 byRow:(_Bool)arg4 forChart:(id)arg5;

@end
