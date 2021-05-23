/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EDCollection.h>

@class CHDChart;

__attribute__((visibility("hidden")))
@interface CHDChartTypesCollection : EDCollection

{
    CHDChart *mChart;
}

- (unsigned long long)addObject:(id)arg1;
- (id)initWithChart:(id)arg1;
- (void)resetSeriesOrder;

@end
