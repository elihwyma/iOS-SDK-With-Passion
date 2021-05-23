/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNRequestConfiguration.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VNImageAnalyzerCompoundRequestConfiguration : VNRequestConfiguration

{
    NSString *_detectorType;
    NSDictionary *_detectorConfigurationOptions;
    NSArray *_originalRequestConfigurations;
}

@property (copy, nonatomic) NSString *detectorType;
@property (copy, nonatomic) NSDictionary *detectorConfigurationOptions;
@property (copy, nonatomic) NSArray *originalRequestConfigurations;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
