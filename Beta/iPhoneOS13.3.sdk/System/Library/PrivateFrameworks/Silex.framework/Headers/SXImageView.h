/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <UIKit/UIImageView.h>

@class NSMapTable, NSString, NSTimer, SXAnimatedImage, SXImageResource, UIActivityIndicatorView, UIImage, UILongPressGestureRecognizer, UIView;

@protocol NSItemProviderWriting, SWReachabilityProvider, SXImageViewDelegate, SXResourceDataSource;

@interface SXImageView : UIImageView

{
    _Bool _shouldShowLoadingIndicator;
    _Bool _scrubbingEnabled;
    _Bool _isScrubbing;
    _Bool _isDecorative;
    _Bool _autoPlayEnabled;
    _Bool _shouldResume;
    _Bool _shouldResumeAfterLoad;
    _Bool _paused;
    SXImageResource *_imageResource;
    id <SXImageViewDelegate> _delegate;
    SXAnimatedImage *_animatedImage;
    unsigned long long _frameIndex;
    CDUnknownBlockType _frameChangeBlock;
    id <SXResourceDataSource> _resourceDataSource;
    id <SWReachabilityProvider> _reachabilityProvider;
    CDUnknownBlockType _preferredQualityImageRequestCancelHandler;
    CDUnknownBlockType _highQualityImageRequestCancelHandler;
    UIImage *_preferredQualityImage;
    UIImage *_highQualityImage;
    unsigned long long _preferredQualityInterest;
    unsigned long long _highQualityInterest;
    NSMapTable *_interestTable;
    UIActivityIndicatorView *_activityIndicatorView;
    unsigned long long _playCount;
    NSTimer *_activeTimer;
    unsigned long long _intendedFrameIndex;
    UILongPressGestureRecognizer *_scrubGesture;
    struct CGSize _preferredImageSize;
    struct CGSize _preferredQualityLoadingImageSize;
    struct CGPoint _previousPoint;
}

@property (weak, nonatomic, readonly) id <SXResourceDataSource> resourceDataSource;
@property (nonatomic, readonly) id <SWReachabilityProvider> reachabilityProvider;
@property (copy, nonatomic) CDUnknownBlockType preferredQualityImageRequestCancelHandler;
@property (copy, nonatomic) CDUnknownBlockType highQualityImageRequestCancelHandler;
@property (nonatomic) struct CGSize preferredQualityLoadingImageSize;
@property (weak, nonatomic) UIImage *preferredQualityImage;
@property (weak, nonatomic) UIImage *highQualityImage;
@property (nonatomic) unsigned long long preferredQualityInterest;
@property (nonatomic) unsigned long long highQualityInterest;
@property (nonatomic, readonly) _Bool hasInterest;
@property (nonatomic, readonly) _Bool prefersHighQuality;
@property (retain, nonatomic) NSMapTable *interestTable;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic) _Bool shouldResume;
@property (nonatomic) _Bool shouldResumeAfterLoad;
@property (nonatomic) unsigned long long playCount;
@property (retain, nonatomic) NSTimer *activeTimer;
@property (nonatomic) unsigned long long intendedFrameIndex;
@property (retain, nonatomic) UILongPressGestureRecognizer *scrubGesture;
@property (nonatomic) struct CGPoint previousPoint;
@property (nonatomic) _Bool isScrubbing;
@property (nonatomic) _Bool paused;
@property (nonatomic, readonly) SXImageResource *imageResource;
@property (nonatomic) _Bool shouldShowLoadingIndicator;
@property (nonatomic) long long loadingIndicatorStyle;
@property (nonatomic) _Bool scrubbingEnabled;
@property (nonatomic) struct CGSize preferredImageSize;
@property (weak, nonatomic) id <SXImageViewDelegate> delegate;
@property (nonatomic, readonly) _Bool containsAnimatedImage;
@property (nonatomic, readonly) _Bool hasLoadedImage;
@property (nonatomic) _Bool isDecorative;
@property (nonatomic, readonly) SXAnimatedImage *animatedImage;
@property (nonatomic) unsigned long long frameIndex;
@property (copy, nonatomic) CDUnknownBlockType frameChangeBlock;
@property (nonatomic) _Bool autoPlayEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <NSItemProviderWriting> dragObject;
@property (nonatomic, readonly) NSString *dragIdentifier;
@property (nonatomic, readonly) UIView *dragPreviewView;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)pause;
- (void)resume;
- (_Bool)isVisible;
- (_Bool)isAccessibilityElement;
- (_Bool)accessibilityIgnoresInvertColors;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)willMoveToSuperview:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)reachabilityChanged:(_Bool)arg1;
- (void)setAnimatedImage:(id)arg1;
- (void)animatedImage:(id)arg1 madeImageAvailableForFrameAtIndex:(unsigned long long)arg2;
- (void)layoutActivityIndicator;
- (void)giveUpInterestForObject:(id)arg1;
- (void)addInterestInImageQuality:(int)arg1 forObject:(id)arg2;
- (void)validateLoadedImage;
- (void)loadHighQualityImage;
- (void)crossfadeToImage:(id)arg1;
- (void)loadPreferredQualityImage;
- (void)didLoadAnimatedImage:(id)arg1;
- (void)fadeInImageWhenVisible:(id)arg1;
- (void)handleScrubGesture:(id)arg1;
- (void)setFrameIndex:(unsigned long long)arg1 allowNearest:(_Bool)arg2;
- (void)showNextFrame;
- (id)supportedCustomRotors;
- (id)itemsForCustomRotor:(id)arg1;
- (void)didStartDragging;
- (void)didEndDragging;
- (id)stringForAXDragAction;
- (id)initWithImageResource:(id)arg1 resourceDataSource:(id)arg2 reachabilityProvider:(id)arg3;
- (_Bool)objectHasQualityInterest:(id)arg1 quality:(int *)arg2;
- (struct CGSize)loadedImageSize;

@end
