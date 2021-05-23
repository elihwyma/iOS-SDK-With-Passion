/*
 Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

#import <AccessibilitySharedSupport/AXSSMotionTrackingInput.h>

@class NSDictionary, NSNumber, NSString;

@interface AXSSMotionTrackingHIDInput : AXSSMotionTrackingInput

{
    NSString *_deviceUniqueID;
    NSNumber *_productID;
    NSNumber *_vendorID;
    NSString *_deviceName;
}

@property (copy, nonatomic) NSString *deviceUniqueID;
@property (copy, nonatomic) NSNumber *productID;
@property (copy, nonatomic) NSNumber *vendorID;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic, readonly) NSDictionary *hidMatchingDictionary;

+ (_Bool)supportsSecureCoding;
+ (id)motionTrackingHIDInputWithDevice:(id)arg1;

- (id)description;
- (id)name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)uniqueIdentifier;
- (id)plistDictionary;
- (id)initWithPlistDictionary:(id)arg1;
- (unsigned long long)trackingType;
- (_Bool)isHIDDevice;
- (_Bool)supportsExpressions;
- (id)initWithDeviceUniqueID:(id)arg1 productID:(id)arg2 vendorID:(id)arg3 deviceName:(id)arg4;

@end
