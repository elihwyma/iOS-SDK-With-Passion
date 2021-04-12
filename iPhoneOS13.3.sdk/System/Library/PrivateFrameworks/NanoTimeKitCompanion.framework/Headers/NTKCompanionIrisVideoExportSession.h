//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, NSError, NSURL;
@protocol OS_dispatch_queue;

@interface NTKCompanionIrisVideoExportSession : NSObject
{
    NSObject<OS_dispatch_queue> *_exportQueue;
    NSObject<OS_dispatch_queue> *_encodeQueue;
    AVAsset *_video;
    NSUInteger _bitrate;
    NSURL *_outputURL;
    long long _status;
    NSError *_error;
    CGSize _outputSize;
    CGRect _crop;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(readonly, nonatomic) NSUInteger bitrate; // @synthesize bitrate=_bitrate;
@property(readonly, nonatomic) CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(readonly, nonatomic) CGRect crop; // @synthesize crop=_crop;
@property(readonly, nonatomic) AVAsset *video; // @synthesize video=_video;
// - (void).cxx_destruct;
- (id)_makeWriter;
- (id)_makeReader;
- (void)exportAsynchronouslyWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)initWithVideo:(id)arg1 crop:(CGRect)arg2 outputSize:(CGSize)arg3 bitrate:(NSUInteger)arg4 outputURL:(id)arg5;

@end

