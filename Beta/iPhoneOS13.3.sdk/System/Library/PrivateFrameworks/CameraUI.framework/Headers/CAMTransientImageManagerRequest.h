/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CAMTransientImageManagerRequest : NSObject

{
    _Bool _isCanceled;
    _Bool _isFinished;
    NSString *_uuid;
    CDUnknownBlockType _resultHandler;
}

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) CDUnknownBlockType resultHandler;
@property (nonatomic) _Bool isCanceled;
@property (nonatomic) _Bool isFinished;

@end
