/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphChange.h>

@class NSSet, NSString, PGGraphPersonNode;

@interface PGGraphPersonChange : PGGraphChange

{
    NSString *_personLocalIdentifier;
    PGGraphPersonNode *_personNode;
    NSSet *_propertyNames;
}

@property (nonatomic, readonly) NSString *personLocalIdentifier;
@property (retain, nonatomic) PGGraphPersonNode *personNode;
@property (nonatomic, readonly) NSSet *propertyNames;

- (id)description;
- (unsigned long long)type;
- (void)mergeChange:(id)arg1;
- (id)initWithPersonLocalIdentifier:(id)arg1 propertyNames:(id)arg2;

@end
