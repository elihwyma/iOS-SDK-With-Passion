/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphChange.h>

@class NSSet;

@interface PGGraphMomentsDeletion : PGGraphChange

{
    NSSet *_momentLocalIdentifiers;
}

@property (nonatomic, readonly) NSSet *momentLocalIdentifiers;

- (id)description;
- (unsigned long long)type;
- (unsigned long long)changeCount;
- (id)initWithMomentLocalIdentifiers:(id)arg1;

@end
