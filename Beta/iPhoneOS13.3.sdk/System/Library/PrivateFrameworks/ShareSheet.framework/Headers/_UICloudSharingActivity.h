/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <ShareSheet/UIActivity.h>

@class NSString, UIImage, UIViewController;

@interface _UICloudSharingActivity : UIActivity

{
    NSString *_activityTitle;
    UIViewController *_activityViewController;
    _Bool _initialSharing;
    UIImage *_activityImage;
}

@property (retain, nonatomic) UIViewController *activityViewController;
@property (retain, nonatomic) NSString *activityTitle;
@property (retain, nonatomic) UIImage *activityImage;
@property (nonatomic) _Bool initialSharing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)activityCategory;
+ (unsigned long long)_xpcAttributes;

- (id)activityType;
- (void)_cloudShareControllerDidDismiss:(id)arg1;
- (void)_documentSharingControllerDidDismiss:(id)arg1;
- (id)_systemImageName;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (void)performActivity;
- (_Bool)_activitySupportsPromiseURLs;
- (_Bool)_isURLEligibleForSharing:(id)arg1 isInitial:(_Bool *)arg2;
- (void)_setupForInitialSharing;
- (void)_setupForSharingInfo;
- (_Bool)eligibleTypeForActivity:(id)arg1;

@end
