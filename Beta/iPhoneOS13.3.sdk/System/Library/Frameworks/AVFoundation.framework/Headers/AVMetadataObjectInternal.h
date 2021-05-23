/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCaptureInput, AVMetadataObject, NSString;

__attribute__((visibility("hidden")))
@interface AVMetadataObjectInternal : NSObject

{
    CDStruct_1b6d18a9 _time;
    CDStruct_1b6d18a9 _duration;
    struct CGRect _bounds;
    NSString *_type;
    AVCaptureInput *_input;
    AVMetadataObject *_originalMetadataObject;
}

@property CDStruct_1b6d18a9 time;
@property CDStruct_1b6d18a9 duration;
@property struct CGRect bounds;
@property (retain) NSString *type;
@property (retain) AVCaptureInput *input;
@property (retain) AVMetadataObject *originalMetadataObject;

- (id)init;
- (void)dealloc;

@end
