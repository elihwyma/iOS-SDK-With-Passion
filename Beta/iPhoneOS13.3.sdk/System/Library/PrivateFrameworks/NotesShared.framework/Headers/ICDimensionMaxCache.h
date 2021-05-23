/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface ICDimensionMaxCache : NSObject

{
    NSMutableDictionary *_dimensions;
    NSMutableArray *_sortedDimensions;
    CDUnknownBlockType _comparator;
}

@property (nonatomic, readonly) NSMutableDictionary *dimensions;
@property (nonatomic, readonly) NSMutableArray *sortedDimensions;
@property (nonatomic, readonly) CDUnknownBlockType comparator;
@property (nonatomic, readonly) double max;
@property (nonatomic, readonly) unsigned long long count;

- (id)init;
- (id)initWithComparator:(CDUnknownBlockType)arg1;
- (double)dimensionForKey:(id)arg1;
- (void)setDimension:(double)arg1 forKey:(id)arg2;
- (void)removeDimensionForKey:(id)arg1;

@end
