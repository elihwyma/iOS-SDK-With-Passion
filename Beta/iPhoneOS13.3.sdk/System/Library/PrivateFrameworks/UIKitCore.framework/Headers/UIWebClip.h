/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableData, NSString, NSURL, NSURLConnection, UIImage;

@protocol WebClipDelegate;

@interface UIWebClip : NSObject

{
    NSString *identifier;
    NSURL *pageURL;
    NSArray *icons;
    unsigned long long currentIconIndex;
    NSURL *startupImageURL;
    NSURL *startupLandscapeImageURL;
    NSString *title;
    NSString *applicationBundleIdentifier;
    unsigned long long bundleVersion;
    _Bool fullScreen;
    _Bool classicMode;
    _Bool removalDisallowed;
    _Bool iconIsScreenShotBased;
    _Bool iconIsPrecomposed;
    _Bool iconIsPrerendered;
    unsigned long long supportedOrientations;
    long long statusBarStyle;
    UIImage *iconImage;
    UIImage *startupImage;
    UIImage *startupLandscapeImage;
    UIImage *initialLaunchImage;
    id <WebClipDelegate> delegate;
    NSMutableData *_customIconData;
    NSURLConnection *_iconConnection;
    NSMutableData *_customStartupImageData;
    NSURLConnection *_startupImageConnection;
    NSMutableData *_customStartupLandscapeImageData;
    NSURLConnection *_startupLandscapeImageConnection;
    unsigned long long _webClipStatusBarStyle;
}

@property (copy) NSString *identifier;
@property (retain, nonatomic) NSURL *pageURL;
@property (retain) NSArray *icons;
@property (retain) NSURL *startupImageURL;
@property (retain) NSURL *startupLandscapeImageURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (nonatomic, readonly) NSURL *applicationLaunchURL;
@property (nonatomic, readonly) unsigned long long bundleVersion;
@property _Bool fullScreen;
@property _Bool classicMode;
@property _Bool removalDisallowed;
@property (readonly) _Bool iconIsScreenShotBased;
@property (readonly) _Bool iconIsPrecomposed;
@property (readonly) _Bool iconIsPrerendered;
@property unsigned long long supportedOrientations;
@property long long statusBarStyle;
@property (nonatomic) unsigned long long webClipStatusBarStyle;
@property (readonly) NSString *iconImagePath;
@property (retain, nonatomic, readonly) UIImage *iconImage;
@property (retain, nonatomic) UIImage *startupImage;
@property (retain, nonatomic) UIImage *startupLandscapeImage;
@property (retain, nonatomic) UIImage *initialLaunchImage;
@property (weak, nonatomic) id <WebClipDelegate> delegate;

+ (_Bool)_webClipFullScreenValueForMetaTagContent:(id)arg1;
+ (unsigned long long)_webClipOrientationsForMetaTagContent:(id)arg1;
+ (id)urlForWebClipWithIdentifier:(id)arg1;
+ (id)pathForWebClipWithIdentifier:(id)arg1;
+ (id)webClipWithIdentifier:(id)arg1;
+ (id)webClipsDirectoryPath;
+ (id)_contentForMetaName:(id)arg1 inWebDocumentView:(id)arg2;
+ (long long)_webClipStatusBarStyleForMetaTagContent:(id)arg1;
+ (id)_webClipLinkTagsFromWebDocumentView:(id)arg1;
+ (id)webClipIconsForWebClipLinkTags:(id)arg1 pageURL:(id)arg2;
+ (id)webClipWithURL:(id)arg1;
+ (id)webClips;
+ (_Bool)bundleIdentifierContainsWebClipIdentifier:(id)arg1;
+ (id)webClipIdentifierFromBundleIdentifier:(id)arg1;
+ (long long)webClipStatusBarStyleForWebDocumentView:(id)arg1;
+ (_Bool)webClipFullScreenValueForWebDocumentView:(id)arg1;
+ (id)webClipTitleForWebDocumentView:(id)arg1;
+ (_Bool)webClipClassicModeValueForWebDocumentView:(id)arg1;
+ (unsigned long long)webClipOrientationsForWebDocumentView:(id)arg1;
+ (id)webClipIconsForWebDocumentView:(id)arg1;
+ (id)pathForWebClipStorageWithIdentifier:(id)arg1;
+ (id)pathForWebClipCacheWithIdentifier:(id)arg1;

- (void)dealloc;
- (id)_info;
- (id)bundleIdentifier;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)_initWithIdentifier:(id)arg1;
- (void)updateCustomMediaLocationsWithWebClipLinkTags:(id)arg1 baseURL:(id)arg2;
- (void)_readPropertiesFromBundle:(id)arg1;
- (void)_reloadProperties;
- (_Bool)_writeImage:(id)arg1 toDiskWithFileName:(id)arg2;
- (_Bool)updateOnDisk;
- (id)_bundleResourceWithName:(id)arg1;
- (id)_bundleImageWithName:(id)arg1;
- (void)_setIconImage:(id)arg1 isPrecomposed:(_Bool)arg2 isScreenShotBased:(_Bool)arg3;
- (void)cancelMediaUpdate;
- (void)stopLoadingCustomIcon;
- (void)stopLoadingStartupImage;
- (void)stopLoadingStartupLandscapeImage;
- (void)requestCustomIconUpdate;
- (void)requestCustomPortraitStartupImageUpdate;
- (void)requestCustomLandscapeStartupImageUpdate;
- (_Bool)tryLoadingNextCustomIcon;
- (void)setIconImage:(id)arg1 isPrecomposed:(_Bool)arg2;
- (void)requestIconUpdateInSpringBoard;
- (void)configureWithMetaTags:(id)arg1 linkTags:(id)arg2;
- (_Bool)createOnDisk;
- (_Bool)removeFromDisk;
- (id)generateIconImageForFormat:(int)arg1 scale:(double)arg2;
- (void)setIconImageFromScreenshot:(id)arg1;
- (void)updateCustomMediaLocationsFromWebDocumentView:(id)arg1;
- (id)getStartupImage:(long long)arg1;

@end
