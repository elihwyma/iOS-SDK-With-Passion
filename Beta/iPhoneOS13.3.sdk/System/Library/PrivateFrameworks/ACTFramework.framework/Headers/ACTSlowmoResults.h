/*
 Image: /System/Library/PrivateFrameworks/ACTFramework.framework/ACTFramework
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface ACTSlowmoResults : NSObject

{
    NSMutableDictionary *_results;
    _Bool _verbose;
    double _minTimeBetweenFrames;
}

@property (readonly) NSDictionary *results;
@property _Bool verbose;
@property double minTimeBetweenFrames;

- (id)init;
- (void)dealloc;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)writeToFile:(id)arg1;
- (void)dumpClusters;
- (id)copyClusters;
- (void)mergeClusters:(id)arg1 cluster2:(id)arg2;
- (void)addFrame:(double)arg1 frameValue:(int)arg2;
- (void)performPass1Clustering;
- (void)performPass2Clustering;
- (void)reduceToSingleTimeRange;
- (void)addVerboseResult:(id)arg1;

@end
