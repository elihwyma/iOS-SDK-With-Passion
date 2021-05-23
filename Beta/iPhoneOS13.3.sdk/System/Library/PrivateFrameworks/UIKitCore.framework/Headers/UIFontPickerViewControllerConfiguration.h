/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSPredicate, UIColor;

@interface UIFontPickerViewControllerConfiguration : NSObject <Swift>

{
    _Bool _includeFaces;
    _Bool _displayUsingSystemFont;
    _Bool __hideSearchBar;
    unsigned int _filteredTraits;
    NSPredicate *_filteredLanguagesPredicate;
    UIColor *__tintColor;
}

@property (nonatomic, setter=_setHideSearchBar:) _Bool _hideSearchBar;
@property (retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;
@property (nonatomic) _Bool includeFaces;
@property (nonatomic) _Bool displayUsingSystemFont;
@property (nonatomic) unsigned int filteredTraits;
@property (copy, nonatomic) NSPredicate *filteredLanguagesPredicate;

+ (_Bool)supportsSecureCoding;
+ (id)filterPredicateForFilteredLanguages:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
