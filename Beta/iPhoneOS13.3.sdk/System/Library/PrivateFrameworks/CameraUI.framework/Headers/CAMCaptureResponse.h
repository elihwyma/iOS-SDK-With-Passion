/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class CAMCaptureCoordinationInfo;

@interface CAMCaptureResponse : NSObject

{
    unsigned short _sessionIdentifier;
    long long _type;
    CAMCaptureCoordinationInfo *_coordinationInfo;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) unsigned short sessionIdentifier;
@property (nonatomic, readonly) CAMCaptureCoordinationInfo *coordinationInfo;

- (id)init;
- (id)initWithType:(long long)arg1 captureSession:(unsigned short)arg2 coordinationInfo:(id)arg3;
- (void)releaseCachedImages;

@end
