/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@interface _DUIImageComponent : NSObject <Swift>

{
    _Bool _ignoresAccessibilityFilters;
    _Bool _hidesImage;
    unsigned int _slotID;
    unsigned int _contextID;
    unsigned long long _renderID;
    struct CGRect _frame;
}

@property (nonatomic) struct CGRect frame;
@property (nonatomic) _Bool ignoresAccessibilityFilters;
@property (nonatomic) unsigned int slotID;
@property (nonatomic) unsigned long long renderID;
@property (nonatomic) unsigned int contextID;
@property (nonatomic, readonly) _Bool representsPortal;
@property (nonatomic) _Bool hidesImage;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)portalView;
- (void)_configurePortalLayer:(id)arg1;

@end
