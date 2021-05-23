/*
 Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSSet;

@interface AXSSMotionTrackingInputConfiguration : NSObject

{
    _Bool _allowSeparateInputForExpressions;
    NSArray *_orderedInputPreference;
    NSSet *_allowedTrackingTypes;
}

@property (copy, nonatomic, readonly) NSDictionary *plistDictionary;
@property (copy, nonatomic) NSArray *orderedInputPreference;
@property (copy, nonatomic) NSSet *allowedTrackingTypes;
@property (nonatomic) _Bool allowSeparateInputForExpressions;
@property (copy, nonatomic, readonly) NSArray *orderedCameraInputPreference;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlistDictionary:(id)arg1;
- (_Bool)isEqualToMotionTrackingInputConfiguration:(id)arg1;
- (id)initWithOrderedInputPreference:(id)arg1 allowedTrackingTypes:(id)arg2 allowSeparateInputForExpressions:(_Bool)arg3;
- (_Bool)supportsTrackingType:(unsigned long long)arg1;

@end
