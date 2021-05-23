/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UITraitStorage.h>

#import <UIKitCore/Swift-Protocol.h>

@class _UICoreUICatalogColorWrapper;

__attribute__((visibility("hidden")))
@interface _UIColorAttributeTraitStorage : _UITraitStorage <Swift>

{
    _UICoreUICatalogColorWrapper *_namedColor;
}

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)applyRecordsMatchingTraitCollection:(id)arg1;
- (id)_propertyDescriptionString;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 color:(id)arg3;

@end
