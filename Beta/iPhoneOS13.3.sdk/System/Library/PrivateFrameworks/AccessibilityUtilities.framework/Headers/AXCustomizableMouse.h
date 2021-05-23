/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface AXCustomizableMouse : NSObject

{
    NSMutableDictionary *_buttonMap;
    NSString *_name;
    NSString *_identifier;
    long long _vendorId;
    long long _productId;
    unsigned long long _connectionType;
}

@property (nonatomic, readonly) NSMutableDictionary *buttonMap;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long vendorId;
@property (nonatomic, readonly) long long productId;
@property (nonatomic, readonly) _Bool hasCustomActions;
@property (nonatomic, readonly) NSArray *buttonsWithCustomActions;
@property (nonatomic, readonly) unsigned long long connectionType;

+ (_Bool)supportsSecureCoding;
+ (id)_newOrExistingMouseForIdentifier:(id)arg1 name:(id)arg2 vendorId:(id)arg3 productId:(id)arg4 connectionType:(unsigned long long)arg5;
+ (id)_existingMouseForIdentifier:(id)arg1 vendorId:(long long)arg2 productId:(long long)arg3;
+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
+ (id)mouseForHIDDevice:(struct __IOHIDDevice *)arg1;
+ (id)mouseForHIDServiceClient:(struct __IOHIDServiceClient *)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToIdentifier:(id)arg1 vendorId:(long long)arg2 productId:(long long)arg3;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 vendorId:(long long)arg3 productId:(long long)arg4;
- (void)updateConnectionType:(unsigned long long)arg1;
- (void)setCustomAction:(id)arg1 forButtonNumber:(long long)arg2;
- (_Bool)isEqualToMouse:(id)arg1;
- (void)setDefaultActionForButtonNumber:(long long)arg1;
- (id)customActionForButtonNumber:(long long)arg1;

@end
