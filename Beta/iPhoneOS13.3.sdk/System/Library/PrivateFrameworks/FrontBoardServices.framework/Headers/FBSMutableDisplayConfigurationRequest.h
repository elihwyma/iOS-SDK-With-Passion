/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <FrontBoardServices/FBSDisplayConfigurationRequest.h>

@interface FBSMutableDisplayConfigurationRequest : FBSDisplayConfigurationRequest

@property (nonatomic) long long overscanCompensation;
@property (nonatomic) struct CGSize pixelSize;
@property (nonatomic) struct CGSize nativePixelSize;
@property (nonatomic) double refreshRate;
@property (nonatomic) long long hdrMode;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
