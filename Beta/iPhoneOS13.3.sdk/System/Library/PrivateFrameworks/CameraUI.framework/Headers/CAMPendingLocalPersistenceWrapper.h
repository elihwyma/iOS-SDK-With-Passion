/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class CAMCaptureRequest;

@interface CAMPendingLocalPersistenceWrapper : NSObject

{
    CAMCaptureRequest *_request;
    id _result;
    CDUnknownBlockType _completionHandler;
}

@property (nonatomic, readonly) CAMCaptureRequest *request;
@property (nonatomic, readonly) id result;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;

- (id)initWithRequest:(id)arg1 result:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
