/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSString, PXScrollViewController;

@protocol PXAccessibilityView, PXDisplayAsset, PXGAccessibilityContentInfoDelegate;

@interface PXGReusableAccessibilityContentInfo : NSObject <Swift>

{
    _Bool _selected;
    _Bool _visible;
    _Bool _isPerformingChanges;
    _Bool _alternateUIVisible;
    long long _contentKind;
    NSString *_text;
    NSString *_title;
    NSString *_subtitle;
    NSString *_imageName;
    id <PXDisplayAsset> _asset;
    NSObject<PXAccessibilityView> *_view;
    NSArray *_selectedContent;
    PXScrollViewController *_scrollViewController;
    id <PXGAccessibilityContentInfoDelegate> _accessibilityDelegate;
    NSMutableArray *_mutableChildren;
    struct CGRect _frame;
}

@property (nonatomic) _Bool isPerformingChanges;
@property (nonatomic) _Bool alternateUIVisible;
@property (retain, nonatomic) NSMutableArray *mutableChildren;
@property (retain, nonatomic) PXScrollViewController *scrollViewController;
@property (weak, nonatomic) id <PXGAccessibilityContentInfoDelegate> accessibilityDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct CGRect frame;
@property (nonatomic) long long contentKind;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *imageName;
@property (retain, nonatomic) id <PXDisplayAsset> asset;
@property (retain, nonatomic) NSObject<PXAccessibilityView> *view;
@property (nonatomic) _Bool selected;
@property (copy, nonatomic) NSArray *selectedContent;
@property (nonatomic) _Bool visible;
@property (nonatomic, readonly) NSArray *px_accessibilityChildren;

+ (id)_textInLayout:(id)arg1 atSpriteIndex:(unsigned int)arg2;
+ (id)_imageNameInLayout:(id)arg1 atSpriteIndex:(unsigned int)arg2;
+ (id)_titleSubtitleInLayout:(id)arg1 atSpriteIndex:(unsigned int)arg2;
+ (void)_assetSelectedInLayout:(id)arg1 atSpriteIndex:(unsigned int)arg2 outAsset:(out id *)arg3 outSelected:(out _Bool *)arg4;

- (id)init;
- (void)prepareForReuse;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)becomeReusable;
- (void)px_accessibilityAddChildElement:(id)arg1;
- (void)px_accessibilityRemoveAllChildren;
- (void)_performClassSwizzlingForContentKind:(long long)arg1;
- (_Bool)_fillForKind:(long long)arg1 withLayout:(id)arg2 spriteIndex:(unsigned int)arg3;
- (_Bool)performChangesToContentKind:(long long)arg1 withLayout:(id)arg2 spriteIndex:(unsigned int)arg3 spriteGeometry:(CDStruct_3ab912e1)arg4;

@end
