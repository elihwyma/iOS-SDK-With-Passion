/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class AVAsset, NSError, NSURL;

@protocol OS_dispatch_queue;

@interface NTKCompanionIrisVideoExportSession : NSObject

{
    NSObject<OS_dispatch_queue> *_exportQueue;
    NSObject<OS_dispatch_queue> *_encodeQueue;
    AVAsset *_video;
    unsigned long long _bitrate;
    NSURL *_outputURL;
    long long _status;
    NSError *_error;
    struct CGSize _outputSize;
    struct CGRect _crop;
}

@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long status;
@property (nonatomic, readonly) AVAsset *video;
@property (nonatomic, readonly) struct CGRect crop;
@property (nonatomic, readonly) struct CGSize outputSize;
@property (nonatomic, readonly) unsigned long long bitrate;
@property (nonatomic, readonly) NSURL *outputURL;

- (id)initWithVideo:(id)arg1 crop:(struct CGRect)arg2 outputSize:(struct CGSize)arg3 bitrate:(unsigned long long)arg4 outputURL:(id)arg5;
- (void)exportAsynchronouslyWithCompletion:(CDUnknownBlockType)arg1;
- (id)_makeReader;
- (id)_makeWriter;

@end
