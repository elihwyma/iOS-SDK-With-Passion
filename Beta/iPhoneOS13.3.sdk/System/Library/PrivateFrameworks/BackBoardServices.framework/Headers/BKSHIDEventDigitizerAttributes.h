/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <BackBoardServices/BKSHIDEventBaseAttributes.h>

@interface BKSHIDEventDigitizerAttributes : BKSHIDEventBaseAttributes

{
    float _maximumForce;
}

@property (nonatomic) float maximumForce;

+ (id)protobufSchema;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
