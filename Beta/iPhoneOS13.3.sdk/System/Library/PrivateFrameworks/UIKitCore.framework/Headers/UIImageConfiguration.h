/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UITraitCollection;

@interface UIImageConfiguration : NSObject <Swift>

{
    _Bool _ignoresDynamicType;
    UITraitCollection *_traitCollection;
}

@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)_completeConfiguration:(id)arg1 fromConfiguration:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)_configurationIgnoringDynamicType;
- (id)configurationByApplyingConfiguration:(id)arg1;
- (id)configurationWithTraitCollection:(id)arg1;
- (_Bool)_isUnspecified;
- (_Bool)isEquivalentToConfiguration:(id)arg1;
- (id)_initWithTraitCollection:(id)arg1;
- (_Bool)_shouldApplyConfiguration:(id)arg1;
- (void)_applyConfigurationValuesTo:(id)arg1;

@end
