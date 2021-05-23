/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VNANFDDetectorCompoundRequestConfigurationGroups : NSObject

{
    NSMutableDictionary *_regionOfInterestConfigurations;
}

- (id)init;
- (unsigned long long)count;
- (id)allConfigurations;
- (id)configurationForRequest:(id)arg1;

@end
