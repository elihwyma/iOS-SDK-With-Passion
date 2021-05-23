/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _PFCameraMetadataAVMetadataObject : NSObject

{
    int _confidence;
    NSString *_type;
    struct CGRect _bounds;
}

@property (readonly) CDStruct_1b6d18a9 time;
@property (readonly) CDStruct_1b6d18a9 duration;
@property (readonly) struct CGRect bounds;
@property (readonly) NSString *type;
@property (readonly) int confidence;

+ (id)objectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 type:(id)arg2;
+ (id)humanFaceObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1;
+ (id)humanBodyObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1;
+ (id)catBodyObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1;
+ (id)dogBodyObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1;
+ (id)salientObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1;

- (id)initWithType:(id)arg1 bounds:(struct CGRect)arg2 confidence:(int)arg3;

@end
