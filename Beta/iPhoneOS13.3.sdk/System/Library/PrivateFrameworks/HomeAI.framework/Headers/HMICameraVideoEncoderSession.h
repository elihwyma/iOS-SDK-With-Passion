/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HMFoundation/HMFObject.h>

@class AVAssetWriter, AVAssetWriterInput, HMFActivity, NSMutableData, NSString;

@interface HMICameraVideoEncoderSession : HMFObject

{
    struct OpaqueVTCompressionSession *_session;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_assetWriterInput;
    NSMutableData *_encodedAssetData;
    HMFActivity *_activity;
}

@property (readonly) struct OpaqueVTCompressionSession *session;
@property (readonly) AVAssetWriter *assetWriter;
@property (readonly) AVAssetWriterInput *assetWriterInput;
@property (readonly) NSMutableData *encodedAssetData;
@property (readonly) HMFActivity *activity;
@property int bitRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void)invalidate;
- (_Bool)isReadyForMoreMediaData;
- (void)assetWriter:(id)arg1 didProduceFragmentedHeaderData:(id)arg2;
- (void)assetWriter:(id)arg1 didProduceFragmentedMediaData:(id)arg2 fragmentedMediaDataReport:(id)arg3;
- (id)initWithWidth:(int)arg1 height:(int)arg2 codecType:(unsigned int)arg3 realTime:(_Bool)arg4 error:(id *)arg5;
- (void)startEncoding;
- (_Bool)encodePixelBuffer:(struct __CVBuffer *)arg1 presentationTime:(CDStruct_1b6d18a9)arg2;
- (void)finishEncodingWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
