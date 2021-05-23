/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphChange.h>

@class NSSet;

@interface PGGraphPersonsDeletion : PGGraphChange

{
    NSSet *_personLocalIdentifiers;
}

@property (nonatomic, readonly) NSSet *personLocalIdentifiers;

- (id)description;
- (unsigned long long)type;
- (unsigned long long)changeCount;
- (id)initWithPersonLocalIdentifiers:(id)arg1;

@end
