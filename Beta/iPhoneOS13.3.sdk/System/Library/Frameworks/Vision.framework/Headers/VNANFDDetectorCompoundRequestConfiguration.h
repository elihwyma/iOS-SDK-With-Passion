/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNRequestConfiguration.h>

@class NSDictionary, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface VNANFDDetectorCompoundRequestConfiguration : VNRequestConfiguration

{
    NSDictionary *_detectorConfigurationOptions;
    NSMutableArray *_originalRequests;
    NSString *_detectorType;
}

@property (copy, nonatomic) NSDictionary *detectorConfigurationOptions;
@property (nonatomic, readonly) NSMutableArray *originalRequests;
@property (copy, nonatomic) NSString *detectorType;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;
- (void)setDetectorConfigurationOption:(id)arg1 value:(id)arg2;

@end
