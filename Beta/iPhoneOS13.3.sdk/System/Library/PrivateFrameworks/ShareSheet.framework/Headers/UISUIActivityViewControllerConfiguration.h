/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSLocale, NSString, UIColor, UISUISecurityContext, UITraitCollection;

@interface UISUIActivityViewControllerConfiguration : NSObject

{
    _Bool _allowsEmbedding;
    _Bool _isContentManaged;
    _Bool _shouldMatchOnlyUserElectedExtensions;
    _Bool _shouldExcludeiCloudAddToDriveActivity;
    _Bool _shouldExcludeiCloudSharingActivity;
    _Bool _shouldSkipPeopleSuggestions;
    _Bool _canExcludeExtensionActivities;
    _Bool _canShowShareSheetPlugIns;
    _Bool _whitelistActionActivitiesOnly;
    _Bool _linkedBeforeYukon;
    _Bool __unitTest_disableExcludingSourceApplicationFromOpenActivities;
    double _preferredWidth;
    NSArray *_hostActivityConfigurations;
    NSArray *_activityItemValueClassNames;
    NSArray *_activityTypesToCreateInShareService;
    UISUISecurityContext *_securityScopedURLsForMatching;
    NSArray *_activityItemValueExtensionMatchingDictionaries;
    NSArray *_urlsBeingShared;
    NSArray *_linkPresentationDataForActivityItems;
    NSArray *_typeIdentifiersForShortcutsMatching;
    UIColor *_hostTintColor;
    NSArray *_initialPhotosAssetDetails;
    NSString *_sessionID;
    UITraitCollection *_hostTraitCollection;
    NSLocale *_hostLocale;
    NSArray *_preferredLocalizations;
    NSArray *_includedActivityTypes;
    NSArray *_excludedActivityTypes;
    NSArray *_activityTypeOrder;
    long long _excludedActivityCategories;
    long long _sharingStyle;
    struct NSDirectionalEdgeInsets _hostLayoutMargins;
}

@property (nonatomic) double preferredWidth;
@property (retain, nonatomic) NSArray *hostActivityConfigurations;
@property (retain, nonatomic) NSArray *activityItemValueClassNames;
@property (retain, nonatomic) NSArray *activityTypesToCreateInShareService;
@property (retain, nonatomic) UISUISecurityContext *securityScopedURLsForMatching;
@property (retain, nonatomic) NSArray *activityItemValueExtensionMatchingDictionaries;
@property (retain, nonatomic) NSArray *urlsBeingShared;
@property (retain, nonatomic) NSArray *linkPresentationDataForActivityItems;
@property (retain, nonatomic) NSArray *typeIdentifiersForShortcutsMatching;
@property (retain, nonatomic) UIColor *hostTintColor;
@property (retain, nonatomic) NSArray *initialPhotosAssetDetails;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) UITraitCollection *hostTraitCollection;
@property (nonatomic) struct NSDirectionalEdgeInsets hostLayoutMargins;
@property (retain, nonatomic) NSLocale *hostLocale;
@property (retain, nonatomic) NSArray *preferredLocalizations;
@property (nonatomic) _Bool allowsEmbedding;
@property (nonatomic) _Bool isContentManaged;
@property (nonatomic) _Bool shouldMatchOnlyUserElectedExtensions;
@property (nonatomic) _Bool shouldExcludeiCloudAddToDriveActivity;
@property (nonatomic) _Bool shouldExcludeiCloudSharingActivity;
@property (nonatomic) _Bool shouldSkipPeopleSuggestions;
@property (nonatomic) _Bool canExcludeExtensionActivities;
@property (nonatomic) _Bool canShowShareSheetPlugIns;
@property (nonatomic) _Bool whitelistActionActivitiesOnly;
@property (nonatomic) _Bool linkedBeforeYukon;
@property (retain, nonatomic) NSArray *includedActivityTypes;
@property (retain, nonatomic) NSArray *excludedActivityTypes;
@property (retain, nonatomic) NSArray *activityTypeOrder;
@property (nonatomic) long long excludedActivityCategories;
@property (nonatomic) long long sharingStyle;
@property (nonatomic, readonly) _Bool _unitTest_disableExcludingSourceApplicationFromOpenActivities;

+ (_Bool)supportsSecureCoding;
+ (void)_unitTest_SetDisableExcludingSourceApplicationFromOpenActivities:(_Bool)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)availableActivityItemValueClasses;
- (id)_contextForMatchingActivityItems:(id)arg1 activityItemValues:(id)arg2 activityItemValueClasses:(id)arg3;
- (id)contextForMatchingByActivityItemValueClasses;
- (id)contextForMatchingByActivityItems:(id)arg1 itemValues:(id)arg2;

@end
