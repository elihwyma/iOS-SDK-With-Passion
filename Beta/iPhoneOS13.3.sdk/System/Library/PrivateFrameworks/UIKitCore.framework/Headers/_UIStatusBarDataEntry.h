/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@interface _UIStatusBarDataEntry : NSObject <Swift>

{
    _Bool _enabled;
}

@property (nonatomic, getter=isEnabled) _Bool enabled;

+ (_Bool)supportsSecureCoding;
+ (id)entry;
+ (id)disabledEntry;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_ui_descriptionBuilder;
- (id)initFromData:(const CDStruct_0942cde0 *)arg1 type:(int)arg2;

@end
