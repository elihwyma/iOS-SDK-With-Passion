/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class UITraitCollection;

__attribute__((visibility("hidden")))
@interface _UIAttributeTraitStorageRecord : NSObject <Swift>

{
    UITraitCollection *_traitCollection;
    id _value;
}

@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic, readonly) id value;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTraitCollection:(id)arg1 value:(id)arg2;

@end
