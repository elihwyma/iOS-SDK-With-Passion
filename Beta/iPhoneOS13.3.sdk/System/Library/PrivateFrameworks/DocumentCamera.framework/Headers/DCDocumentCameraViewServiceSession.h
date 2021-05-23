/*
 Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

#import <Foundation/NSObject.h>

@class DCDocumentCameraViewServiceSessionRequest, ICDocCamImageCache;

@interface DCDocumentCameraViewServiceSession : NSObject

{
    int _viewServicePid;
    DCDocumentCameraViewServiceSessionRequest *_sessionRequest;
    ICDocCamImageCache *_docCamImageCache;
}

@property (nonatomic, readonly) DCDocumentCameraViewServiceSessionRequest *sessionRequest;
@property (nonatomic, readonly) int viewServicePid;
@property (nonatomic, readonly) ICDocCamImageCache *docCamImageCache;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setup;
- (id)initWithSessionRequest:(id)arg1;

@end
