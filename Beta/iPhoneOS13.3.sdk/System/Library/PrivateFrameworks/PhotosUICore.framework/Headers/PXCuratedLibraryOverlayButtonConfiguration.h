/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString, PXCuratedLibraryActionPerformer, PXCuratedLibrarySectionHeaderLayoutSpec, UIColor, UIImage;

@interface PXCuratedLibraryOverlayButtonConfiguration : NSObject

{
    _Bool _isSystemSymbolIcon;
    UIColor *_contentColor;
    UIColor *_highlightedContentColor;
    UIImage *_iconImage;
    UIImage *_tintedIconImage;
    UIImage *_highlightedIconImage;
    PXCuratedLibrarySectionHeaderLayoutSpec *_spec;
    PXCuratedLibraryActionPerformer *_actionPerformer;
    CDUnknownBlockType _actionHandler;
    long long _style;
    long long _segment;
    NSString *_iconImageName;
    NSString *_title;
    NSSet *_possibleTitles;
    NSString *_caption;
    struct UIEdgeInsets _imageEdgeInsets;
    struct UIEdgeInsets _hitTestOutsets;
}

@property (nonatomic, readonly) UIColor *contentColor;
@property (nonatomic, readonly) UIColor *highlightedContentColor;
@property (nonatomic, readonly) UIImage *iconImage;
@property (nonatomic, readonly) UIImage *tintedIconImage;
@property (nonatomic, readonly) UIImage *highlightedIconImage;
@property (nonatomic, readonly) PXCuratedLibrarySectionHeaderLayoutSpec *spec;
@property (retain, nonatomic) PXCuratedLibraryActionPerformer *actionPerformer;
@property (copy, nonatomic) CDUnknownBlockType actionHandler;
@property (nonatomic) long long style;
@property (nonatomic) long long segment;
@property (nonatomic) struct UIEdgeInsets imageEdgeInsets;
@property (nonatomic) struct UIEdgeInsets hitTestOutsets;
@property (nonatomic, readonly) NSString *iconImageName;
@property (nonatomic) _Bool isSystemSymbolIcon;
@property (nonatomic, readonly) NSString *title;
@property (copy, nonatomic) NSSet *possibleTitles;
@property (copy, nonatomic) NSString *caption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)tintedImageCache;
+ (id)configurationWithIconImageName:(id)arg1 spec:(id)arg2;
+ (id)configurationWithTitle:(id)arg1 spec:(id)arg2;
+ (id)configurationWithIconImageName:(id)arg1 title:(id)arg2 spec:(id)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)prepareForRender;
- (id)initWithIconImageName:(id)arg1 title:(id)arg2 spec:(id)arg3;
- (id)_contentColorWhenHighlighted:(_Bool)arg1;
- (id)_tintedImage:(id)arg1 name:(id)arg2 withColor:(id)arg3;

@end
