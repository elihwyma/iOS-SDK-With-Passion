/*
 Image: /System/Library/Frameworks/IOSurface.framework/IOSurface
 */

#import <IOSurface/IOSurfaceDebugDescription.h>

@class NSString;

@interface _IOSurfaceDebugDescription : IOSurfaceDebugDescription

{
    CDStruct_0bcbbf48 _basicInfo;
    CDStruct_6c6f70a4 _layoutInfo;
    NSString *_name;
}

@property (readonly) unsigned long long virtualAddress;
@property (readonly) unsigned long long allocationSize;
@property (readonly) unsigned int surfaceID;
@property (readonly) unsigned int pixelFormat;
@property (readonly) unsigned int width;
@property (readonly) unsigned int height;
@property (readonly) NSString *name;

- (void)dealloc;
- (id)description;
- (id)initWithBasicInfo:(const CDStruct_0bcbbf48 *)arg1 layoutInfo:(const CDStruct_6c6f70a4 *)arg2 name:(id)arg3;

@end
