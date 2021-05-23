/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphChange.h>

@class NSSet;

@interface PGGraphPersonsInsertion : PGGraphChange

{
    NSSet *_personLocalIdentifiers;
    NSSet *_persons;
}

@property (nonatomic, readonly) NSSet *personLocalIdentifiers;
@property (nonatomic, readonly) NSSet *persons;

- (id)description;
- (unsigned long long)type;
- (unsigned long long)changeCount;
- (id)initWithPersonLocalIdentifiers:(id)arg1;
- (id)initWithPersons:(id)arg1;

@end
