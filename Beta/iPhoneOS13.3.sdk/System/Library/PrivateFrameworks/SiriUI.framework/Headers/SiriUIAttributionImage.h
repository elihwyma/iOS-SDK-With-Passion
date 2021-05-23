/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <NSObject.h>

@class NSBundle, NSString, NSURL, SAUIAppPunchOut;

@interface SiriUIAttributionImage : NSObject

{
    NSString *_localResourceName;
    NSString *_localPressedResourceName;
    SAUIAppPunchOut *_localPunchOut;
    NSBundle *_localResourceBundle;
    NSURL *_remoteURL;
    NSURL *_remotePressedURL;
    SAUIAppPunchOut *_remotePunchOut;
    double _remoteScale;
    double _remotePressedScale;
    struct CGSize _logoSize;
}

@property (copy, nonatomic) NSString *localResourceName;
@property (copy, nonatomic) NSString *localPressedResourceName;
@property (retain, nonatomic) SAUIAppPunchOut *localPunchOut;
@property (retain, nonatomic) NSBundle *localResourceBundle;
@property (copy, nonatomic) NSURL *remoteURL;
@property (copy, nonatomic) NSURL *remotePressedURL;
@property (retain, nonatomic) SAUIAppPunchOut *remotePunchOut;
@property (nonatomic) double remoteScale;
@property (nonatomic) double remotePressedScale;
@property (nonatomic) struct CGSize logoSize;

+ (id)attributionImageFromKey:(id)arg1 pressedKey:(id)arg2 punchOut:(id)arg3;
+ (id)attributionImageFromAppPunchOut:(id)arg1;
+ (id)attributionImageFromImageResource:(id)arg1;
+ (id)attributionImageWithLocalResourceName:(id)arg1 pressedResourceName:(id)arg2 localPunchOut:(id)arg3 bundle:(id)arg4;

- (void)_fetchRemoteResourcesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchLocalResourcesWithCompletion:(CDUnknownBlockType)arg1;
- (id)_imageInLocalResourceBundleNamed:(id)arg1;
- (void)getLogoWithCompletion:(CDUnknownBlockType)arg1;

@end
