/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGTitleSpecArgument.h>

@class NSSet;

@interface PGTitleSpecLocationArgument : PGTitleSpecArgument

{
    _Bool _filterLocations;
    unsigned long long _type;
    NSSet *_usedLocationNodes;
    unsigned long long _lineBreakBehavior;
}

@property (readonly) unsigned long long type;
@property (readonly) _Bool filterLocations;
@property unsigned long long lineBreakBehavior;
@property (retain) NSSet *usedLocationNodes;

+ (id)argumentWithLocationType:(unsigned long long)arg1 filterLocations:(_Bool)arg2;

- (id)_resolvedStringWithMomentNodes:(id)arg1;
- (id)_resolvedStringWithMomentNodes:(id)arg1 features:(id)arg2;
- (id)initWithLocationType:(unsigned long long)arg1 filterLocations:(_Bool)arg2;
- (id)_generateBusinessItemTitleWithMomentNodes:(id)arg1;
- (id)_generateLocationTitleWithOptions:(id)arg1;

@end
