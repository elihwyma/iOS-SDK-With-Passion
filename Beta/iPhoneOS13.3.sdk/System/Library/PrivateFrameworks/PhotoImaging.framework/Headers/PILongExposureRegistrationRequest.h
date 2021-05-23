/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <NeutrinoCore/NURenderRequest.h>

@class NSDictionary;

@interface PILongExposureRegistrationRequest : NURenderRequest

{
    NSDictionary *_recipe;
    CDStruct_996ac03c _cleanAperture;
}

@property (copy, nonatomic) NSDictionary *recipe;
@property (nonatomic) CDStruct_996ac03c cleanAperture;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)submit:(CDUnknownBlockType)arg1;
- (id)newRenderJob;
- (long long)mediaComponentType;

@end
