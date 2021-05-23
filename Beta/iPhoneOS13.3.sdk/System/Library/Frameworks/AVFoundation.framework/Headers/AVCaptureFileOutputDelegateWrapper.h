/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVWeakReferencingDelegateStorage, NSArray, NSURL;

__attribute__((visibility("hidden")))
@interface AVCaptureFileOutputDelegateWrapper : NSObject

{
    _Bool _recording;
    _Bool _paused;
    long long _settingsID;
    NSURL *_outputFileURL;
    NSArray *_metadata;
    AVWeakReferencingDelegateStorage *_delegateStorage;
    NSArray *_connections;
}

@property (readonly) long long settingsID;
@property (readonly) NSURL *outputFileURL;
@property (retain) NSArray *metadata;
@property (readonly) AVWeakReferencingDelegateStorage *delegateStorage;
@property (readonly) NSArray *connections;
@property (nonatomic, getter=isRecording) _Bool recording;
@property (nonatomic, getter=isPaused) _Bool paused;

+ (id)wrapperWithURL:(id)arg1 delegate:(id)arg2 settingsID:(long long)arg3 connections:(id)arg4;

- (void)dealloc;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 settingsID:(long long)arg3 connections:(id)arg4;

@end
