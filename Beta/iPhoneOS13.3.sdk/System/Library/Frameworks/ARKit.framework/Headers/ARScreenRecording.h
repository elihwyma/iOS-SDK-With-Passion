/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class RPScreenRecorder, UIViewController;

@interface ARScreenRecording : NSObject

{
    _Bool _saveInPhotosLibrary;
    UIViewController *_parentViewController;
    RPScreenRecorder *_recorder;
}

@property (retain, nonatomic) UIViewController *parentViewController;
@property (retain, nonatomic) RPScreenRecorder *recorder;
@property (nonatomic) _Bool saveInPhotosLibrary;

- (id)initWith:(id)arg1;
- (void)startRecordingWithHandler:(CDUnknownBlockType)arg1;
- (void)stopRecordingWithHandler:(CDUnknownBlockType)arg1;

@end
