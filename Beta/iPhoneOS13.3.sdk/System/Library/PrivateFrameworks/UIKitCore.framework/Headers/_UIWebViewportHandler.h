/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@protocol _UIWebViewportHandlerDelegate;

@interface _UIWebViewportHandler : NSObject

{
    _Bool _initialConfigurationHasBeenSentToDelegate;
    struct _UIWebViewportConfiguration _defaultConfiguration;
    struct _UIWebViewportConfiguration _configuration;
    unsigned int _webkitDefinedConfigurationFlags;
    struct CGSize _availableViewSize;
    struct CGSize _viewportArgumentsSize;
    _Bool _widthIsDeviceWidth;
    _Bool _heightIsDeviceHeight;
    _Bool _isInUpdateBlock;
    _Bool _classicViewportMode;
    id <_UIWebViewportHandlerDelegate> _delegate;
    struct CGRect _documentBounds;
}

@property (nonatomic) id <_UIWebViewportHandlerDelegate> delegate;
@property (nonatomic, readonly) struct CGRect documentBounds;
@property (nonatomic, readonly) struct CGSize availableViewSize;
@property (nonatomic, readonly) float initialScale;
@property (nonatomic, readonly) float minimumScale;
@property (nonatomic, readonly) float maximumScale;
@property (nonatomic, readonly) _Bool allowsUserScaling;
@property (nonatomic, readonly) unsigned int webkitDefinedConfigurationFlags;
@property (nonatomic, readonly, getter=isClassicViewportMode) _Bool classicViewportMode;
@property (nonatomic, readonly) _Bool avoidsUnsafeArea;
@property (nonatomic, readonly) struct _UIWebViewportConfiguration rawViewConfiguration;

- (void)setDocumentBounds:(struct CGRect)arg1;
- (void)update:(CDUnknownBlockType)arg1;
- (double)integralScaleForScale:(double)arg1 keepingPointFixed:(struct CGPoint *)arg2;
- (float)minimumScaleForViewSize:(struct CGSize)arg1;
- (void)clearWebKitViewportConfigurationFlags;
- (void)resetViewportConfiguration:(const struct _UIWebViewportConfiguration *)arg1;
- (float)viewportWidth;
- (float)viewportHeight;
- (void)applyWebKitViewportArgumentsSize:(struct CGSize)arg1 initialScale:(float)arg2 minimumScale:(float)arg3 maximumScale:(float)arg4 allowsUserScaling:(float)arg5 allowsShrinkToFit:(float)arg6 viewportFit:(id)arg7;
- (void)overrideViewportConfiguration:(const struct _UIWebViewportConfiguration *)arg1;
- (void)setAvailableViewSize:(struct CGSize)arg1 updateConfigurationSize:(_Bool)arg2;
- (double)integralInitialScale;
- (_Bool)shouldIgnoreScalingConstraints;
- (_Bool)shouldIgnoreVerticalScalingConstraints;
- (_Bool)shouldIgnoreHorizontalScalingConstraints;
- (void)_resolveViewSizeRelativeLengths;

@end
