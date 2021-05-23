/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIImage;

@interface UIBarItem : NSObject <Swift>

{
    _Bool _hasCustomizableInstanceAppearanceModifications;
    _Bool _shouldArchiveUIAppearanceTags;
    UIImage *_largeContentSizeImage;
    long long _tag;
    struct UIEdgeInsets _largeContentSizeImageInsets;
}

@property (nonatomic, setter=_setHasCustomizableInstanceAppearanceModifications:) _Bool _hasCustomizableInstanceAppearanceModifications;
@property (nonatomic, setter=_setShouldArchiveUIAppearanceTags:) _Bool _shouldArchiveUIAppearanceTags;
@property (copy, nonatomic, readonly) NSString *resolvedTitle;
@property (nonatomic, readonly) _Bool selected;
@property (nonatomic, readonly) _Bool hasTitle;
@property (nonatomic, readonly) _Bool hasImage;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *landscapeImagePhone;
@property (retain, nonatomic) UIImage *largeContentSizeImage;
@property (nonatomic) struct UIEdgeInsets imageInsets;
@property (nonatomic) struct UIEdgeInsets landscapeImagePhoneInsets;
@property (nonatomic) struct UIEdgeInsets largeContentSizeImageInsets;
@property (nonatomic) long long tag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)appearance;
+ (id)appearanceWhenContainedInInstancesOfClasses:(id)arg1;
+ (id)_appearanceBlindViewClasses;
+ (id)_appearanceWhenContainedIn:(id)arg1;
+ (id)appearanceWhenContainedIn:(Class)arg1;
+ (id)appearanceForTraitCollection:(id)arg1;
+ (id)appearanceForTraitCollection:(id)arg1 whenContainedInInstancesOfClasses:(id)arg2;
+ (id)appearanceForTraitCollection:(id)arg1 whenContainedIn:(Class)arg2;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)titleTextAttributesForState:(unsigned long long)arg1;
- (id)_attributedTitleForState:(unsigned long long)arg1 withDefaultAttributes:(id)arg2;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;

@end
