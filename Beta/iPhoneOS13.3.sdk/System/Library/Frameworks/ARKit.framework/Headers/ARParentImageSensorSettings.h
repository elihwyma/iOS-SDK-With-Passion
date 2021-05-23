/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class NSArray;

@interface ARParentImageSensorSettings : NSObject <Swift>

{
    _Bool _audioCaptureEnabled;
    _Bool _allowCameraInMultipleForegroundAppLayout;
    NSArray *_settings;
}

@property (nonatomic) _Bool audioCaptureEnabled;
@property (nonatomic) _Bool allowCameraInMultipleForegroundAppLayout;
@property (copy, nonatomic) NSArray *settings;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
