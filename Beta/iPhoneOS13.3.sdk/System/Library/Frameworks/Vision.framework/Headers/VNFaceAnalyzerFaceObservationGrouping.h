/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VNFaceAnalyzerFaceObservationGrouping : NSObject

{
    NSMutableDictionary *_observationGroupsToRequestMapping;
}

- (id)addToGroupingsRequest:(id)arg1 withFaceObservations:(id)arg2;
- (id)requestsForGroup:(id)arg1;

@end
