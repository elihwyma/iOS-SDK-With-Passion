/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, WKPreferences, WKProcessPool, WKUserContentController, WKWebView, WKWebViewContentProviderRegistry, WKWebpagePreferences, WKWebsiteDataStore, _WKApplicationManifest, _WKVisitedLinkStore, _WKWebsiteDataStore;

@protocol _UIClickInteractionDriving;

@interface WKWebViewConfiguration : NSObject

{
    struct RefPtr<API::PageConfiguration, WTF::DumbPtrTraits<API::PageConfiguration>> _pageConfiguration;
    struct LazyInitialized<WTF::RetainPtr<WKProcessPool>> _processPool;
    struct LazyInitialized<WTF::RetainPtr<WKPreferences>> _preferences;
    struct LazyInitialized<WTF::RetainPtr<WKUserContentController>> _userContentController;
    struct LazyInitialized<WTF::RetainPtr<_WKVisitedLinkStore>> _visitedLinkStore;
    struct LazyInitialized<WTF::RetainPtr<WKWebsiteDataStore>> _websiteDataStore;
    struct LazyInitialized<WTF::RetainPtr<WKWebpagePreferences>> _defaultWebpagePreferences;
    struct WeakObjCPtr<WKWebView> _relatedWebView;
    struct WeakObjCPtr<WKWebView> _alternateWebViewForNavigationGestures;
    struct RetainPtr<NSString> _groupIdentifier;
    struct Optional<WTF::RetainPtr<NSString>> _applicationNameForUserAgent;
    double _incrementalRenderingSuppressionTimeout;
    _Bool _respectsImageOrientation;
    _Bool _printsBackgrounds;
    _Bool _allowsJavaScriptMarkup;
    _Bool _convertsPositionStyleOnCopy;
    _Bool _allowsMetaRefresh;
    _Bool _allowUniversalAccessFromFileURLs;
    struct LazyInitialized<WTF::RetainPtr<WKWebViewContentProviderRegistry>> _contentProviderRegistry;
    _Bool _allowsInlineMediaPlayback;
    _Bool _inlineMediaPlaybackRequiresPlaysInlineAttribute;
    _Bool _allowsInlineMediaPlaybackAfterFullscreen;
    unsigned long long _dragLiftDelay;
    _Bool _textInteractionGesturesEnabled;
    _Bool _longPressActionsEnabled;
    _Bool _systemPreviewEnabled;
    _Bool _shouldDecidePolicyBeforeLoadingQuickLookPreview;
    _Bool _invisibleAutoplayNotPermitted;
    _Bool _mediaDataLoadsAutomatically;
    _Bool _attachmentElementEnabled;
    Class _attachmentFileWrapperClass;
    _Bool _mainContentUserGestureOverrideEnabled;
    _Bool _waitsForPaintAfterViewDidMoveToWindow;
    _Bool _controlledByAutomation;
    _Bool _applePayEnabled;
    _Bool _needsStorageAccessFromFileURLsQuirk;
    _Bool _legacyEncryptedMediaAPIEnabled;
    _Bool _allowMediaContentTypesRequiringHardwareSupportAsFallback;
    _Bool _colorFilterEnabled;
    _Bool _incompleteImageBorderEnabled;
    _Bool _shouldDeferAsynchronousScriptsUntilAfterDocumentLoad;
    _Bool _drawsBackground;
    _Bool _editableImagesEnabled;
    _Bool _undoManagerAPIEnabled;
    struct RetainPtr<NSString> _mediaContentTypesRequiringHardwareSupport;
    struct RetainPtr<NSArray<NSString *>> _additionalSupportedImageTypes;
    _Bool _suppressesIncrementalRendering;
    _Bool _allowsAirPlayForMediaPlayback;
    _Bool _allowsPictureInPictureMediaPlayback;
    _Bool _ignoresViewportScaleLimits;
    unsigned long long _mediaTypesRequiringUserActionForPlayback;
    long long _selectionGranularity;
    unsigned long long _dataDetectorTypes;
}

@property (weak, nonatomic, setter=_setRelatedWebView:) WKWebView *_relatedWebView;
@property (copy, nonatomic, setter=_setGroupIdentifier:) NSString *_groupIdentifier;
@property (retain, nonatomic, setter=_setVisitedLinkStore:) _WKVisitedLinkStore *_visitedLinkStore;
@property (weak, nonatomic, setter=_setAlternateWebViewForNavigationGestures:) WKWebView *_alternateWebViewForNavigationGestures;
@property (nonatomic, setter=_setTreatsSHA1SignedCertificatesAsInsecure:) _Bool _treatsSHA1SignedCertificatesAsInsecure;
@property (nonatomic, setter=_setRespectsImageOrientation:) _Bool _respectsImageOrientation;
@property (nonatomic, setter=_setPrintsBackgrounds:) _Bool _printsBackgrounds;
@property (nonatomic, setter=_setIncrementalRenderingSuppressionTimeout:) double _incrementalRenderingSuppressionTimeout;
@property (nonatomic, setter=_setAllowsJavaScriptMarkup:) _Bool _allowsJavaScriptMarkup;
@property (nonatomic, setter=_setConvertsPositionStyleOnCopy:) _Bool _convertsPositionStyleOnCopy;
@property (nonatomic, setter=_setAllowsMetaRefresh:) _Bool _allowsMetaRefresh;
@property (nonatomic, setter=_setAllowUniversalAccessFromFileURLs:) _Bool _allowUniversalAccessFromFileURLs;
@property (nonatomic, setter=_setNeedsStorageAccessFromFileURLsQuirk:) _Bool _needsStorageAccessFromFileURLsQuirk;
@property (nonatomic, setter=_setMainContentUserGestureOverrideEnabled:) _Bool _mainContentUserGestureOverrideEnabled;
@property (nonatomic, setter=_setInvisibleAutoplayNotPermitted:) _Bool _invisibleAutoplayNotPermitted;
@property (nonatomic, setter=_setMediaDataLoadsAutomatically:) _Bool _mediaDataLoadsAutomatically;
@property (nonatomic, setter=_setAttachmentElementEnabled:) _Bool _attachmentElementEnabled;
@property (nonatomic, setter=_setAttachmentFileWrapperClass:) Class _attachmentFileWrapperClass;
@property (nonatomic, setter=_setInitialCapitalizationEnabled:) _Bool _initialCapitalizationEnabled;
@property (nonatomic, setter=_setApplePayEnabled:) _Bool _applePayEnabled;
@property (nonatomic, setter=_setWaitsForPaintAfterViewDidMoveToWindow:) _Bool _waitsForPaintAfterViewDidMoveToWindow;
@property (nonatomic, getter=_isControlledByAutomation, setter=_setControlledByAutomation:) _Bool _controlledByAutomation;
@property (nonatomic, setter=_setApplicationManifest:) _WKApplicationManifest *_applicationManifest;
@property (nonatomic, setter=_setColorFilterEnabled:) _Bool _colorFilterEnabled;
@property (nonatomic, setter=_setIncompleteImageBorderEnabled:) _Bool _incompleteImageBorderEnabled;
@property (nonatomic, setter=_setDrawsBackground:) _Bool _drawsBackground;
@property (nonatomic, setter=_setShouldDeferAsynchronousScriptsUntilAfterDocumentLoad:) _Bool _shouldDeferAsynchronousScriptsUntilAfterDocumentLoad;
@property (nonatomic, setter=_setAlwaysRunsAtForegroundPriority:) _Bool _alwaysRunsAtForegroundPriority;
@property (nonatomic, setter=_setInlineMediaPlaybackRequiresPlaysInlineAttribute:) _Bool _inlineMediaPlaybackRequiresPlaysInlineAttribute;
@property (nonatomic, setter=_setAllowsInlineMediaPlaybackAfterFullscreen:) _Bool _allowsInlineMediaPlaybackAfterFullscreen;
@property (nonatomic, setter=_setDragLiftDelay:) unsigned long long _dragLiftDelay;
@property (nonatomic, setter=_setTextInteractionGesturesEnabled:) _Bool _textInteractionGesturesEnabled;
@property (nonatomic, setter=_setLongPressActionsEnabled:) _Bool _longPressActionsEnabled;
@property (nonatomic, setter=_setSystemPreviewEnabled:) _Bool _systemPreviewEnabled;
@property (nonatomic, setter=_setShouldDecidePolicyBeforeLoadingQuickLookPreview:) _Bool _shouldDecidePolicyBeforeLoadingQuickLookPreview;
@property (nonatomic, setter=_setCanShowWhileLocked:) _Bool _canShowWhileLocked;
@property (nonatomic, setter=_setClickInteractionDriverForTesting:) id <_UIClickInteractionDriving> _clickInteractionDriverForTesting;
@property (retain, nonatomic, setter=_setWebsiteDataStore:) _WKWebsiteDataStore *_websiteDataStore;
@property (nonatomic, setter=_setRequiresUserActionForAudioPlayback:) _Bool _requiresUserActionForAudioPlayback;
@property (nonatomic, setter=_setRequiresUserActionForVideoPlayback:) _Bool _requiresUserActionForVideoPlayback;
@property (nonatomic, setter=_setOverrideContentSecurityPolicy:) NSString *_overrideContentSecurityPolicy;
@property (nonatomic, setter=_setMediaContentTypesRequiringHardwareSupport:) NSString *_mediaContentTypesRequiringHardwareSupport;
@property (nonatomic, setter=_setLegacyEncryptedMediaAPIEnabled:) _Bool _legacyEncryptedMediaAPIEnabled;
@property (nonatomic, setter=_setAllowMediaContentTypesRequiringHardwareSupportAsFallback:) _Bool _allowMediaContentTypesRequiringHardwareSupportAsFallback;
@property (copy, nonatomic, setter=_setAdditionalSupportedImageTypes:) NSArray *_additionalSupportedImageTypes;
@property (nonatomic, setter=_setEditableImagesEnabled:) _Bool _editableImagesEnabled;
@property (nonatomic, setter=_setUndoManagerAPIEnabled:) _Bool _undoManagerAPIEnabled;
@property (nonatomic) _Bool mediaPlaybackRequiresUserAction;
@property (nonatomic) _Bool mediaPlaybackAllowsAirPlay;
@property (nonatomic) _Bool requiresUserActionForMediaPlayback;
@property (nonatomic, setter=_setContentProviderRegistry:) WKWebViewContentProviderRegistry *_contentProviderRegistry;
@property (nonatomic, readonly) NSString *_applicationNameForDesktopUserAgent;
@property (retain, nonatomic) WKProcessPool *processPool;
@property (retain, nonatomic) WKPreferences *preferences;
@property (retain, nonatomic) WKUserContentController *userContentController;
@property (retain, nonatomic) WKWebsiteDataStore *websiteDataStore;
@property (nonatomic) _Bool suppressesIncrementalRendering;
@property (copy, nonatomic) NSString *applicationNameForUserAgent;
@property (nonatomic) _Bool allowsAirPlayForMediaPlayback;
@property (nonatomic) unsigned long long mediaTypesRequiringUserActionForPlayback;
@property (copy, nonatomic) WKWebpagePreferences *defaultWebpagePreferences;
@property (nonatomic) _Bool allowsInlineMediaPlayback;
@property (nonatomic) long long selectionGranularity;
@property (nonatomic) _Bool allowsPictureInPictureMediaPlayback;
@property (nonatomic) unsigned long long dataDetectorTypes;
@property (nonatomic) _Bool ignoresViewportScaleLimits;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (Ref_1d7364d1)copyPageConfiguration;
- (id)urlSchemeHandlerForURLScheme:(id)arg1;
- (void)setURLSchemeHandler:(id)arg1 forURLScheme:(id)arg2;
- (id)_visitedLinkProvider;
- (void)_setVisitedLinkProvider:(id)arg1;

@end
