/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PGGraphResolvedPlace : NSObject

{
    NSString *_placeInterestType;
    double _confidence;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *placeInterestType;
@property (nonatomic, readonly) double confidence;

- (id)initWithPlaceOfInterestType:(id)arg1 confidence:(double)arg2;

@end
