/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVCaptureDeviceControlRequest : NSObject

{
    CDUnknownBlockType _completionBlock;
    int _requestID;
    int _errorCode;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType completionBlock;
@property (nonatomic, readonly) int requestID;
@property (nonatomic) int errorCode;

+ (id)deviceControlRequestWithCompletionBlock:(CDUnknownBlockType)arg1;

- (void)dealloc;
- (id)_initWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
