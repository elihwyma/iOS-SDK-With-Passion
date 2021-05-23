/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBSplitImageView.h>

@class NSObject, NSString, UIKBRenderConfig, UIKBTree, UITextInputTraits;

__attribute__((visibility("hidden")))
@interface UIKBBackgroundView : UIKBSplitImageView

{
    UIKBTree *_keyplane;
    UITextInputTraits *_inputTraits;
    int _visualStyle;
    NSObject *_geometryCacheKey;
    struct CGRect _splitLeftRect;
    struct CGRect _splitLeftCacheRect;
    struct CGRect _splitRightRect;
    struct CGRect _splitRightCacheRect;
    unsigned long long _topCorners;
    _Bool _isSplit;
    _Bool _centerFilled;
    _Bool _hasCandidateKeys;
    UIKBRenderConfig *_renderConfig;
}

@property (retain, nonatomic) NSObject *geometryCacheKey;
@property (retain, nonatomic) UIKBRenderConfig *renderConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, readonly) _Bool cacheDeferable;
@property (nonatomic, readonly) double cachedWidth;
@property (nonatomic, readonly) _Bool keepNonPersistent;
@property (nonatomic, readonly) long long cacheDeferPriority;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)displayLayer:(id)arg1;
- (_Bool)_canDrawContent;
- (id)cacheKeysForRenderFlags:(id)arg1;
- (void)drawContentsOfRenderers:(id)arg1;
- (void)refreshStyleForKeyplane:(id)arg1 inputTraits:(id)arg2;

@end
