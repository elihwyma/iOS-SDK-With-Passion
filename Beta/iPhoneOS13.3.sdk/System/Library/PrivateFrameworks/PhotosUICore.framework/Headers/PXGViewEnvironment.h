/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class UIColor, UITraitCollection;

@interface PXGViewEnvironment : NSObject <Swift>

{
    _Bool _accessibilityEnabled;
    UIColor *_backgroundColor;
    UIColor *_tintColor;
    UITraitCollection *_traitCollection;
    long long _userInterfaceStyle;
    struct CGColor *_selectionHighlightColor;
}

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) UIColor *tintColor;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic, readonly) long long userInterfaceStyle;
@property (nonatomic, readonly) struct CGColor *selectionHighlightColor;
@property (nonatomic, readonly) _Bool accessibilityEnabled;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithView:(id)arg1 accessibilityEnabled:(_Bool)arg2;

@end
