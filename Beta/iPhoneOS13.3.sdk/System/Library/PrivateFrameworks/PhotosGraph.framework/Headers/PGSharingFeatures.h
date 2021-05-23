/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface PGSharingFeatures : NSObject

{
    NSArray *_classes;
    NSArray *_momentFeatureVectors;
    NSArray *_assetFeatureVectors;
}

@property (nonatomic, readonly) NSArray *classes;
@property (nonatomic, readonly) NSArray *momentFeatureVectors;
@property (nonatomic, readonly) NSArray *assetFeatureVectors;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClasses:(id)arg1 momentFeatureVectors:(id)arg2 assetFeatureVectors:(id)arg3;

@end
