/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARReferenceImageCachedError, NSString, NSUUID;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ARReferenceImage : NSObject

{
    NSObject<OS_dispatch_queue> *_verificationQueue;
    NSObject<OS_dispatch_semaphore> *_verificationQueueSemaphore;
    NSString *_name;
    NSString *_resourceGroupName;
    double _estimatedQuality;
    ARReferenceImageCachedError *_cachedVerificationError;
    struct __CVBuffer *_pixelBuffer;
    struct __CVBuffer *_alphaMask;
    NSUUID *_identifier;
    struct CGSize _physicalSize;
}

@property double estimatedQuality;
@property (retain) ARReferenceImageCachedError *cachedVerificationError;
@property (nonatomic, readonly) struct CGSize imageSize;
@property (nonatomic, readonly) struct __CVBuffer *pixelBuffer;
@property (nonatomic, readonly) struct __CVBuffer *alphaMask;
@property (nonatomic, readonly) NSUUID *identifier;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) struct CGSize physicalSize;
@property (nonatomic, readonly) NSString *resourceGroupName;

+ (_Bool)supportsSecureCoding;
+ (id)referenceImagesInGroupNamed:(id)arg1 catalogName:(id)arg2 bundle:(id)arg3;
+ (id)referenceImagesInGroupNamed:(id)arg1 catalog:(id)arg2;
+ (id)referenceImagesInGroupNamed:(id)arg1 bundle:(id)arg2;
+ (id)referenceImagesInGroupNamed:(id)arg1 catalogURL:(id)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCIImage:(id)arg1 orientation:(unsigned int)arg2 physicalWidth:(double)arg3 alphaInfo:(unsigned int *)arg4 addPadding:(_Bool)arg5;
- (id)initWithCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2 physicalWidth:(double)arg3 addPadding:(_Bool)arg4;
- (void)setResourceGroupName:(id)arg1;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2 physicalWidth:(double)arg3 addPadding:(_Bool)arg4;
- (id)initWithCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2 physicalWidth:(double)arg3;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2 physicalWidth:(double)arg3;
- (void)validateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)estimateQualityWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
