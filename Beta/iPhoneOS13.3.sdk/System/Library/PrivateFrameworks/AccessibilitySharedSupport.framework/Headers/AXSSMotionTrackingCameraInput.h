/*
 Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

#import <AccessibilitySharedSupport/AXSSMotionTrackingInput.h>

@class NSString;

@interface AXSSMotionTrackingCameraInput : AXSSMotionTrackingInput

{
    NSString *_name;
    NSString *_captureDeviceUniqueID;
}

@property (copy, nonatomic) NSString *captureDeviceUniqueID;
@property (copy, nonatomic) NSString *name;

+ (_Bool)supportsSecureCoding;
+ (id)captureDeviceForMotionTrackingInput:(id)arg1;
+ (id)motionTrackingCameraInputWithAVCaptureDevice:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)uniqueIdentifier;
- (id)plistDictionary;
- (id)initWithPlistDictionary:(id)arg1;
- (_Bool)isCamera;
- (unsigned long long)trackingType;
- (_Bool)supportsExpressions;
- (id)initWithCaptureDeviceUniqueID:(id)arg1 name:(id)arg2;

@end
