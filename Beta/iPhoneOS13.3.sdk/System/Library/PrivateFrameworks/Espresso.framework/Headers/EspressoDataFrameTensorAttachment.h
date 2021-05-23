/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <Espresso/EspressoDataFrameAttachment.h>

@interface EspressoDataFrameTensorAttachment : EspressoDataFrameAttachment

{
    CDStruct_0a65202a buffer;
}

+ (CDStruct_0a65202a)copyFromCVPixelBuffer:(struct __CVBuffer *)arg1;

- (void)loadFromDict:(id)arg1 frameStorage:(id)arg2;
- (CDStruct_0a65202a)copyAsEspressoBuffer;

@end
