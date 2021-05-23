/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface NTKCompanionImageDataScaler : NSObject

{
    NSData *_outputData;
    NSData *_data;
    long long _orientation;
    struct CGSize _inputSize;
    struct CGSize _outputSize;
    struct CGRect _inputCrop;
}

@property (nonatomic, readonly) struct CGSize inputSize;
@property (nonatomic, readonly) struct CGRect inputCrop;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) long long orientation;
@property (nonatomic, readonly) struct CGSize outputSize;

- (id)initWithSize:(struct CGSize)arg1 crop:(struct CGRect)arg2 data:(id)arg3 orientation:(long long)arg4 outputSize:(struct CGSize)arg5;
- (void)cropAndScaleWithCompletion:(CDUnknownBlockType)arg1;

@end
