/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol AVTSplashScreenLayoutDelegate;

@interface AVTSplashScreenLayout : NSObject

{
    _Bool _wantsSecondaryVideo;
    _Bool _constrainToContainer;
    _Bool _needsLayout;
    id <AVTSplashScreenLayoutDelegate> _delegate;
    unsigned long long _labelEdgePaddingStyle;
    NSString *_currentContentSizeCategory;
    struct CGSize _containerSize;
    struct CGSize _unconstrainedContentSize;
    struct UIEdgeInsets _edgeInsets;
    struct CGRect _titleFrame;
    struct CGRect _subTitleFrame;
    struct CGRect _primaryVideoFrame;
    struct CGRect _secondaryVideoFrame;
    struct CGRect _buttonFrame;
}

@property (nonatomic) _Bool wantsSecondaryVideo;
@property (nonatomic) _Bool constrainToContainer;
@property (nonatomic) struct CGRect titleFrame;
@property (nonatomic) struct CGRect subTitleFrame;
@property (nonatomic) struct CGRect primaryVideoFrame;
@property (nonatomic) struct CGRect secondaryVideoFrame;
@property (nonatomic) struct CGRect buttonFrame;
@property (copy, nonatomic) NSString *currentContentSizeCategory;
@property (nonatomic) _Bool needsLayout;
@property (weak, nonatomic) id <AVTSplashScreenLayoutDelegate> delegate;
@property (nonatomic, readonly) struct CGSize containerSize;
@property (nonatomic, readonly) struct UIEdgeInsets edgeInsets;
@property (nonatomic, readonly) unsigned long long labelEdgePaddingStyle;
@property (nonatomic, readonly) struct CGSize unconstrainedContentSize;

+ (id)titleFont;
+ (_Bool)isSmallScreen;
+ (id)subTitleFont;
+ (id)buttonFont;
+ (id)blueButton;
+ (unsigned long long)appropriateLabelEdgePaddingStyleForViewSize:(struct CGSize)arg1;
+ (struct CGSize)primaryVideoSize;
+ (struct CGSize)secondaryVideoSize;
+ (struct CGRect)buttonFrameForString:(id)arg1 containerSize:(struct CGSize)arg2 edgeInsets:(struct UIEdgeInsets)arg3;
+ (double)defaultLabelEdgePaddingForLabelEdgePaddingStyle:(unsigned long long)arg1 contentSizeCategory:(id)arg2 numberOfLines:(long long)arg3;
+ (struct CGRect)titleFrameForString:(id)arg1 yOrigin:(double)arg2 containerSize:(struct CGSize)arg3 labelEdgePadding:(double)arg4;
+ (struct CGRect)subTitleFrameForString:(id)arg1 titleFrame:(struct CGRect)arg2 buttonFrame:(struct CGRect)arg3 wantsSecondaryVideo:(_Bool)arg4 containerSize:(struct CGSize)arg5 labelEdgePadding:(double)arg6;
+ (struct CGRect)primaryVideoFrameForContentFrame:(struct CGRect)arg1 wantsSecondaryVideo:(_Bool)arg2;
+ (struct CGRect)secondaryVideoFrameForContentFrame:(struct CGRect)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)didChangeContentSizeCategory:(id)arg1;
- (id)initWithContainerSize:(struct CGSize)arg1 edgeInsets:(struct UIEdgeInsets)arg2 wantsSecondaryVideo:(_Bool)arg3 labelEdgePaddingStyle:(unsigned long long)arg4;
- (void)calculateLayoutWithTitleString:(id)arg1 subTitleString:(id)arg2 buttonTitle:(id)arg3;
- (id)initWithContainerSize:(struct CGSize)arg1 edgeInsets:(struct UIEdgeInsets)arg2 wantsSecondaryVideo:(_Bool)arg3 labelEdgePaddingStyle:(unsigned long long)arg4 currentContentSizeCategory:(id)arg5;

@end
