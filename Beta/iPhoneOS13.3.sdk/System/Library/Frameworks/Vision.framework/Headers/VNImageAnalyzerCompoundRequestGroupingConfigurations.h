/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VNImageAnalyzerCompoundRequestGroupingConfigurations : NSObject

{
    NSMutableDictionary *_groupingConfigurations;
}

- (id)init;
- (_Bool)preferBackgroundProcessing;
- (id)groupingConfigurationForRequest:(id)arg1 kind:(unsigned long long)arg2;
- (id)allGroupingConfigurations;
- (unsigned long long)groupingConfigurationsCount;

@end
