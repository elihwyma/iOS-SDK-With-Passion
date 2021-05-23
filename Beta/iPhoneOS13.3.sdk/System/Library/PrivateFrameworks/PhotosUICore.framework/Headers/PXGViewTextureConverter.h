/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PXGImageTexture;

@protocol OS_dispatch_queue;

@interface PXGViewTextureConverter : NSObject

{
    NSObject<OS_dispatch_queue> *_requestQueue;
    NSObject<OS_dispatch_queue> *_processingQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) int presentationType;
@property (nonatomic, readonly) PXGImageTexture *transparentTexture;
@property (nonatomic, readonly) _Bool supportsTextureAtlas;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;

- (id)createTextureFromCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2;
- (id)createTextureFromCVPixelBuffer:(struct __CVBuffer *)arg1 transform:(struct CGAffineTransform)arg2;
- (id)createPayloadTextureFromPayload:(id)arg1;
- (id)createTextureAtlasManagerForImageDataSpec:(CDStruct_1b544862)arg1;

@end
