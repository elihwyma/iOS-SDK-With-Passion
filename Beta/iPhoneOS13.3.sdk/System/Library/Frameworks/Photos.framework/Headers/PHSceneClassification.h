/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@interface PHSceneClassification : NSObject

{
    unsigned int _sceneIdentifier;
    double _confidence;
}

@property (nonatomic, readonly) unsigned int sceneIdentifier;
@property (nonatomic, readonly) double confidence;

+ (id)fetchSceneClassificationsGroupedByAssetLocalIdentifierForAssets:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSceneIdentifier:(unsigned int)arg1 confidence:(double)arg2;
- (_Bool)isEqualToSceneClassification:(id)arg1;

@end
