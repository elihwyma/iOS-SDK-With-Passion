/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <BackBoardServices/BKSHIDEventBaseAttributes.h>

@interface BKSHIDEventRedirectAttributes : BKSHIDEventBaseAttributes

{
    int _pid;
}

@property (nonatomic) int pid;

+ (id)protobufSchema;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
