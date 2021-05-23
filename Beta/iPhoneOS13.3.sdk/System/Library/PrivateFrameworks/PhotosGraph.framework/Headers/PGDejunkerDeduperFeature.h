/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface PGDejunkerDeduperFeature : NSObject

{
    _Bool _isVideo;
    NSSet *_personLocalIdentifiers;
    NSSet *_peopleScenes;
}

@property (readonly) _Bool hasPersons;
@property (readonly) _Bool hasPeopleScenes;
@property (readonly) _Bool isVideo;
@property (readonly) NSSet *personLocalIdentifiers;
@property (readonly) NSSet *peopleScenes;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPersonLocalIdentifiers:(id)arg1 peopleScenes:(id)arg2 isVideo:(_Bool)arg3;
- (long long)identicalSimilarity;

@end
