/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphChange.h>

@class NSSet;

@interface PGGraphMomentsInsertion : PGGraphChange

{
    NSSet *_momentLocalIdentifiers;
    NSSet *_moments;
}

@property (nonatomic, readonly) NSSet *momentLocalIdentifiers;
@property (nonatomic, readonly) NSSet *moments;

- (id)description;
- (unsigned long long)type;
- (unsigned long long)changeCount;
- (id)initWithMoments:(id)arg1;
- (id)initWithMomentLocalIdentifiers:(id)arg1;

@end
