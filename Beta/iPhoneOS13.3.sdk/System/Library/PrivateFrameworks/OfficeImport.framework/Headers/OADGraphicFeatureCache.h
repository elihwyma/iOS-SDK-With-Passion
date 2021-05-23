/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, OITSUNoCopyDictionary;

__attribute__((visibility("hidden")))
@interface OADGraphicFeatureCache : NSObject

{
    NSMutableArray *mFeatureUsageArray;
    OITSUNoCopyDictionary *mFeatureMap;
}

- (id)init;
- (void)dealloc;
- (id)countedFeatureAtIndex:(unsigned long long)arg1;
- (unsigned long long)cacheFeature:(id)arg1;
- (id)featuresSortedByUsageCount;

@end
