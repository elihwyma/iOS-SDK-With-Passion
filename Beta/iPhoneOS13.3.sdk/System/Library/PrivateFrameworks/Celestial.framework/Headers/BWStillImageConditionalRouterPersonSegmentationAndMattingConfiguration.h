/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWStillImageConditionalRouterConfiguration.h>

@interface BWStillImageConditionalRouterPersonSegmentationAndMattingConfiguration : BWStillImageConditionalRouterConfiguration

@property (nonatomic, readonly) unsigned int defaultOutputIndex;
@property (nonatomic, readonly) unsigned int personSegmentationAndMattingOuputIndex;

+ (id)personSegmentationAndMattingConfiguration;

- (id)init;

@end
