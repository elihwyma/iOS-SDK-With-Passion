/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface ICDimensionSumCache : NSObject

{
    double _sum;
    double _estimateDimension;
    NSMutableDictionary *_dimensions;
}

@property (nonatomic) double sum;
@property (nonatomic, readonly) NSMutableDictionary *dimensions;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) double estimateDimension;

- (id)init;
- (double)dimensionForKey:(id)arg1;
- (id)initWithKeys:(id)arg1 andEstimateDimension:(double)arg2;
- (void)setDimension:(double)arg1 forKey:(id)arg2;
- (void)removeDimensionForKey:(id)arg1;

@end
