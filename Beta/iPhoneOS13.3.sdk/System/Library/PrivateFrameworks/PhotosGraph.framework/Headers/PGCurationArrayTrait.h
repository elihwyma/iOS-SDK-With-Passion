/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGCurationTrait.h>

@class NSArray;

@interface PGCurationArrayTrait : PGCurationTrait

{
    NSArray *_items;
    NSArray *_negativeItems;
}

@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSArray *negativeItems;

- (id)debugDescription;
- (_Bool)isActive;
- (id)initWithItems:(id)arg1;
- (id)initWithItems:(id)arg1 negativeItems:(id)arg2;

@end
