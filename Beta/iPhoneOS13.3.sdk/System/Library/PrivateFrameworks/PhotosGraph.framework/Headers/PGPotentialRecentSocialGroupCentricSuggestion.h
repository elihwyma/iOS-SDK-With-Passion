/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate;

@interface PGPotentialRecentSocialGroupCentricSuggestion : NSObject

{
    float _weight;
    NSArray *_personLocalIdentifiers;
    NSArray *_personWeights;
    NSArray *_momentLocalIdentifiers;
    NSArray *_assets;
    NSDate *_notSeenSinceDate;
}

@property (nonatomic, readonly) NSArray *personLocalIdentifiers;
@property (nonatomic, readonly) NSArray *personWeights;
@property (nonatomic, readonly) NSArray *momentLocalIdentifiers;
@property (nonatomic, readonly) float weight;
@property (retain, nonatomic) NSArray *assets;
@property (retain, nonatomic) NSDate *notSeenSinceDate;

- (id)initWithPersonLocalIdentifiers:(id)arg1 personWeights:(id)arg2 momentLocalIdentifiers:(id)arg3 weight:(float)arg4 notSeenSinceDate:(id)arg5;

@end
