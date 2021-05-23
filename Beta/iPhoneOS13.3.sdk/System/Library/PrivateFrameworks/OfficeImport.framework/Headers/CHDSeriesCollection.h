/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EDSortedCollection.h>

@class CHDChart;

__attribute__((visibility("hidden")))
@interface CHDSeriesCollection : EDSortedCollection

{
    CHDChart *mChart;
}

+ (id)seriesCollectionWithChart:(id)arg1;

- (unsigned long long)addObject:(id)arg1;
- (id)initWithChart:(id)arg1;
- (unsigned long long)nonEmptySeriesCount;
- (id)firstNonEmptySeries;

@end
