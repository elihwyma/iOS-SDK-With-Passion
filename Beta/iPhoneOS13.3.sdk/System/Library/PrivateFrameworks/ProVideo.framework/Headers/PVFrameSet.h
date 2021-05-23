/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class AVDepthData, PVCMSampleBuffer, PVImageBuffer;

@interface PVFrameSet : NSObject

{
    struct unique_ptr<PVGCDLock, std::__1::default_delete<PVGCDLock>> _mdLock;
    struct NSMutableDictionary *_metadata;
    PVCMSampleBuffer *_colorSampleBuffer;
    AVDepthData *_depthData;
    PVImageBuffer *_alphaMaskImageBuffer;
}

@property (nonatomic, readonly) PVCMSampleBuffer *colorSampleBuffer;
@property (nonatomic, readonly) CDStruct_1b6d18a9 presentationTimeStamp;
@property (nonatomic, readonly) PVImageBuffer *colorImageBuffer;
@property (nonatomic, readonly) AVDepthData *depthData;
@property (retain) PVImageBuffer *alphaMaskImageBuffer;

- (id).cxx_construct;
- (struct NSDictionary *)metadataDict;
- (void)setMetadataDict:(struct NSDictionary *)arg1;
- (id)initWithColorBuffer:(id)arg1 depthData:(id)arg2 metadata:(id)arg3;
- (void)setMetadataObject:(id)arg1 forKey:(id)arg2;
- (id)initWithColorBuffer:(id)arg1 metadata:(id)arg2;
- (id)metadataObjectForKey:(id)arg1;
- (void)commonInitWithColorBuffer:(id)arg1 depthData:(id)arg2 metadata:(id)arg3;

@end
