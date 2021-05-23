/*
 Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface AXSSMotionTrackingInput : NSObject

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *uniqueIdentifier;
@property (copy, nonatomic, readonly) NSDictionary *plistDictionary;
@property (nonatomic, readonly) _Bool isHIDDevice;
@property (nonatomic, readonly) _Bool isCamera;
@property (nonatomic, readonly) _Bool supportsExpressions;
@property (nonatomic, readonly) _Bool supportsLookAtPoint;
@property (nonatomic, readonly) unsigned long long trackingType;

+ (_Bool)supportsSecureCoding;
+ (id)motionTrackingInputFromPlistDictionary:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlistDictionary:(id)arg1;
- (_Bool)isEqualToMotionTrackingInput:(id)arg1;

@end
