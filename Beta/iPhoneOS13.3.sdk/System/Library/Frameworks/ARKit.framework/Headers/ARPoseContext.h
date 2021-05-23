/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ARPoseContext : NSObject

{
    long long _cameraPosition;
    CDUnknownBlockType _cameraTransformCallback;
}

@property (nonatomic) long long cameraPosition;
@property (copy, nonatomic) CDUnknownBlockType cameraTransformCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)imageData;
- (id)resultDataOfClass:(Class)arg1;

@end
