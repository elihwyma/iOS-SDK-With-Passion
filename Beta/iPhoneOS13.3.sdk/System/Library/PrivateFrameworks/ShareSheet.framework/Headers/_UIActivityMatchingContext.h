/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSString, UIActivity;

@interface _UIActivityMatchingContext : NSObject

{
    NSData *_hostAuditTokenData;
    _Bool _isContentManaged;
    _Bool _shouldMatchOnlyUserElectedExtensions;
    _Bool _shouldExcludeiCloudAddToDriveActivity;
    _Bool _shouldExcludeiCloudSharingActivity;
    _Bool _canExcludeExtensionActivities;
    _Bool _whitelistActionActivitiesOnly;
    _Bool _allowMatchingBuiltInActivities;
    _Bool _allowMatchingExtensionActivities;
    NSArray *_activityItems;
    NSArray *_activityItemValues;
    NSArray *_activityItemValueClasses;
    NSArray *_activityItemValueExtensionMatchingDictionaries;
    NSArray *_activityTypeOrder;
    NSArray *_includedActivityTypes;
    NSArray *_excludedActivityTypes;
    long long _excludedActivityCategories;
    long long _sharingStyle;
    UIActivity *_currentlySelectedActivity;
    NSArray *_applicationActivities;
    NSArray *_prematchedExtensionActivities;
    NSArray *_externalMatchBuiltinOrderedActivities;
    NSArray *_activityTypesGeneratedByDelegate;
}

@property (nonatomic) const CDStruct_6ad76789 *hostAuditToken;
@property (nonatomic, readonly) NSData *hostAuditTokenData;
@property (nonatomic) _Bool allowMatchingBuiltInActivities;
@property (nonatomic) _Bool allowMatchingExtensionActivities;
@property (retain, nonatomic) NSArray *externalMatchBuiltinOrderedActivities;
@property (copy, nonatomic) NSArray *activityTypesGeneratedByDelegate;
@property (nonatomic, readonly) NSArray *activityItems;
@property (nonatomic, readonly) NSArray *activityItemValues;
@property (retain, nonatomic) NSArray *activityItemValueClasses;
@property (retain, nonatomic) NSArray *activityItemValueExtensionMatchingDictionaries;
@property (nonatomic) _Bool isContentManaged;
@property (nonatomic, readonly) NSString *sourceApplicationIdentifier;
@property (nonatomic) _Bool shouldMatchOnlyUserElectedExtensions;
@property (nonatomic) _Bool shouldExcludeiCloudAddToDriveActivity;
@property (nonatomic) _Bool shouldExcludeiCloudSharingActivity;
@property (nonatomic) _Bool canExcludeExtensionActivities;
@property (nonatomic) _Bool whitelistActionActivitiesOnly;
@property (retain, nonatomic) NSArray *activityTypeOrder;
@property (retain, nonatomic) NSArray *includedActivityTypes;
@property (retain, nonatomic) NSArray *excludedActivityTypes;
@property (nonatomic) long long excludedActivityCategories;
@property (nonatomic) long long sharingStyle;
@property (retain, nonatomic) UIActivity *currentlySelectedActivity;
@property (retain, nonatomic) NSArray *applicationActivities;
@property (retain, nonatomic) NSArray *prematchedExtensionActivities;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithActivityItems:(id)arg1 itemValues:(id)arg2;
- (_Bool)shouldExcludeActivity:(id)arg1;
- (id)activitiesByFilteringExcludedActivities:(id)arg1;

@end
