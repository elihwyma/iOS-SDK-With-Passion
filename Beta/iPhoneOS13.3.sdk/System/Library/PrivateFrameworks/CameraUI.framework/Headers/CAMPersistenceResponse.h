/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class CAMCaptureCoordinationInfo, NSDate, NSString, NSURL, UIImage;

@interface CAMPersistenceResponse : NSObject

{
    unsigned short _sessionIdentifier;
    NSString *_persistenceUUID;
    NSURL *_persistenceURL;
    NSDate *_creationDate;
    UIImage *_scrubberImage;
    CAMCaptureCoordinationInfo *_coordinationInfo;
    struct CGSize _pixelSize;
}

@property (copy, nonatomic, readonly) NSString *persistenceUUID;
@property (nonatomic, readonly) unsigned short sessionIdentifier;
@property (copy, nonatomic, readonly) NSURL *persistenceURL;
@property (nonatomic, readonly) NSDate *creationDate;
@property (copy, nonatomic, readonly) UIImage *scrubberImage;
@property (nonatomic, readonly) struct CGSize pixelSize;
@property (nonatomic, readonly) CAMCaptureCoordinationInfo *coordinationInfo;

- (id)description;
- (id)initWithUUID:(id)arg1 captureSession:(unsigned short)arg2 url:(id)arg3 creationDate:(id)arg4 scrubberImage:(id)arg5 pixelSize:(struct CGSize)arg6 coordinationInfo:(id)arg7;

@end
