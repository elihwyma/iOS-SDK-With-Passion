/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
 */

#import <Foundation/NSObject.h>

@class INIntent, INInteraction, INRelevantShortcut, NSString, NSUserActivity, REDonatedAction, UIImage;

@interface REUIDonatedElementProperties : NSObject

{
    UIImage *_bodyImage;
    _Bool _isUsingPlaceholderArtwork;
    _Bool _displayAppName;
    REDonatedAction *_action;
    NSString *_appName;
    UIImage *_appIcon;
    UIImage *_fullsizeAppIcon;
    NSString *_title;
    NSString *_subtitle;
    UIImage *_monochromeBodyImage;
    NSUserActivity *_userActivity;
    INIntent *_intent;
    INRelevantShortcut *_relevantShortcut;
}

@property (nonatomic, readonly) REDonatedAction *action;
@property (nonatomic, readonly) NSString *appName;
@property (nonatomic, readonly) UIImage *appIcon;
@property (nonatomic, readonly) UIImage *fullsizeAppIcon;
@property (nonatomic, readonly) _Bool displayAppName;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) UIImage *bodyImage;
@property (nonatomic, readonly) UIImage *monochromeBodyImage;
@property (nonatomic, readonly) NSString *bodyImageCompositingFilter;
@property (nonatomic, readonly) INInteraction *interaction;
@property (nonatomic, readonly) NSUserActivity *userActivity;
@property (nonatomic, readonly) INIntent *intent;
@property (nonatomic, readonly) INRelevantShortcut *relevantShortcut;
@property (nonatomic, readonly) unsigned long long donationType;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *remoteBundleIdentifier;
@property (nonatomic, readonly) NSString *localBundleIdentifier;
@property (nonatomic, readonly) _Bool requiresRemoteExecution;
@property (nonatomic, readonly) _Bool supportsLocalIntentExecution;
@property (nonatomic, readonly) _Bool isMediaDonation;
@property (nonatomic, readonly) _Bool isWorkoutDonation;
@property (nonatomic, readonly) _Bool isBeginWorkoutDonation;
@property (nonatomic, readonly) _Bool isEndWorkoutDonation;
@property (nonatomic, readonly, getter=isLocalDonation) _Bool localDonation;
@property (nonatomic, readonly) _Bool supportsBackgroundExecution;

+ (_Bool)supportsSecureCoding;
+ (void)createWithDonatedAction:(id)arg1 completion:(CDUnknownBlockType)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)loadWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDonatedAction:(id)arg1;
- (void)_loadAppContentPropertiesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_loadContentForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadContentForUserActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadContentForRelevantShortcut:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_hasLocalExtensionForIntentExecution;
- (id)_placeholderImageNameForBundleID:(id)arg1;
- (void)_loadContentForUserActivityOnShortcut:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_scaleImageForDisplay:(id)arg1;
- (_Bool)_isMusicDonation;
- (_Bool)_isPodcastsDonation;

@end
