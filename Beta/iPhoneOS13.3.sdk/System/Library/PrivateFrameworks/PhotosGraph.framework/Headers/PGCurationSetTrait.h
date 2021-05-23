/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGCurationTrait.h>

@class NSSet;

@interface PGCurationSetTrait : PGCurationTrait

{
    NSSet *_items;
    NSSet *_negativeItems;
}

@property (nonatomic, readonly) NSSet *items;
@property (nonatomic, readonly) NSSet *negativeItems;

- (id)debugDescription;
- (_Bool)isActive;
- (id)initWithItems:(id)arg1;
- (id)initWithItems:(id)arg1 negativeItems:(id)arg2;

@end
