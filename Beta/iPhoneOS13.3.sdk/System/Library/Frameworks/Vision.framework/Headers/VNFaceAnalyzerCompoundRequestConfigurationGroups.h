/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VNFaceAnalyzerCompoundRequestConfigurationGroups : NSObject

{
    NSMutableDictionary *_generalConfigurations;
    NSMutableDictionary *_observationGroupConfigurations;
}

- (id)init;
- (unsigned long long)count;
- (id)configurationForRequest:(id)arg1 withObservationGroup:(id)arg2;
- (id)allConfigurations;

@end
