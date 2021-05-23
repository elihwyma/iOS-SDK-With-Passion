/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class CAMCaptureRequest, NSDate, NSMutableDictionary;

@interface CAMPendingRemotePersistenceWrapper : NSObject

{
    CAMCaptureRequest *_request;
    NSDate *_creationDate;
    NSMutableDictionary *_job;
    CDUnknownBlockType _completionHandler;
}

@property (nonatomic, readonly) CAMCaptureRequest *request;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSMutableDictionary *job;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;

- (id)initWithRequest:(id)arg1 creationDate:(id)arg2 job:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
