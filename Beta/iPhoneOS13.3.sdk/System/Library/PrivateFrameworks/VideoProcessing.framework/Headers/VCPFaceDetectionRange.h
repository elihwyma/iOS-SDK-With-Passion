/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPFaceDetectionRange : NSObject

{
    unsigned long long _flags;
    unsigned long long _position;
    unsigned long long _faceID;
    CDStruct_1b6d18a9 _start;
    CDStruct_1b6d18a9 _last;
    struct CGRect _bounds;
}

@property CDStruct_1b6d18a9 start;
@property CDStruct_1b6d18a9 last;
@property unsigned long long flags;
@property struct CGRect bounds;
@property unsigned long long position;
@property unsigned long long faceID;

@end
