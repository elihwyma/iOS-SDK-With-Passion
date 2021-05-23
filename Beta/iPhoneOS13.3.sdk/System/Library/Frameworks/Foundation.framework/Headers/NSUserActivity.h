/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSSet, NSString, NSURL, NSUUID, UAUserActivity;

@protocol NSUserActivityDelegate;

@interface NSUserActivity : NSObject

{
    id _internal;
    id _delegate;
    id _frameworkDelegate;
}

@property (copy, setter=_setSubtitle:) NSString *_subtitle;
@property (copy, setter=_setMinimalRequiredUserInfoKeys:) NSSet *_minimalRequiredUserInfoKeys;
@property (copy, setter=_setContentType:) NSString *_contentType;
@property (copy, setter=_setContentUserAction:) NSString *_contentUserAction;
@property (copy, setter=_setContentAttributes:) NSDictionary *_contentAttributes;
@property (copy, setter=_setKeywords:) NSSet *_keywords;
@property (copy, setter=_setContentIdentifier:) NSString *_contentIdentifier;
@property (copy, setter=_setExpirationDate:) NSDate *_expirationDate;
@property (getter=_isEligibleForUserActivityHandoff, setter=_setEligibleForUserActivityHandoff:) _Bool _eligibleForUserActivityHandoff;
@property (getter=_isEligibleForUserActivityIndexing, setter=_setEligibleForUserActivityIndexing:) _Bool _eligibleForUserActivityIndexing;
@property (getter=_isEligibleForUserActivityReminders, setter=_setEligibleForUserActivityReminders:) _Bool _eligibleForUserActivityReminders;
@property (getter=_isEligibleForUserActivityPublicIndexing, setter=_setEligibleForUserActivityPublicIndexing:) _Bool _eligibleForUserActivityPublicIndexing;
@property (copy, readonly) NSString *_teamIdentifier;
@property (retain, readonly) NSUUID *_uniqueIdentifier;
@property (readonly) long long _suggestedActionType;
@property (copy, readonly) NSDate *_lastActivityDate;
@property (copy, setter=_setOptions:) NSDictionary *_options;
@property (copy, setter=_setFrameworkPayload:) NSDictionary *_frameworkPayload;
@property (weak, setter=_setFrameworkDelegate:) id <NSUserActivityDelegate> _frameworkDelegate;
@property (retain, readonly) UAUserActivity *_internalUserActivity;
@property (copy, readonly) NSString *activityType;
@property (copy) NSString *title;
@property (copy) NSDictionary *userInfo;
@property (copy) NSSet *requiredUserInfoKeys;
@property _Bool needsSave;
@property (copy) NSURL *webpageURL;
@property (copy) NSURL *referrerURL;
@property (copy) NSDate *expirationDate;
@property (copy) NSSet *keywords;
@property _Bool supportsContinuationStreams;
@property (weak) id <NSUserActivityDelegate> delegate;
@property (copy) NSString *targetContentIdentifier;
@property (getter=isEligibleForHandoff) _Bool eligibleForHandoff;
@property (getter=isEligibleForSearch) _Bool eligibleForSearch;
@property (getter=isEligibleForPublicIndexing) _Bool eligibleForPublicIndexing;
@property (getter=isEligibleForPrediction) _Bool eligibleForPrediction;
@property (copy) NSString *persistentIdentifier;

+ (id)_userFacingErrorForLaunchServicesError:(id)arg1 userInfo:(id)arg2;
+ (void)deleteSavedUserActivitiesWithPersistentIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)deleteAllSavedUserActivitiesWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (_Bool)_supportsUserActivityAppLinks;
+ (_Bool)_currentUserActivityUUIDWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)_fetchUserActivityWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)_fetchUserActivityWithUUID:(id)arg1 intervalToWaitForDocumentSynchronizationToComplete:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)_registerUserActivityType:(id)arg1 dynamicActivityType:(id)arg2;
+ (void)_unregisterUserActivityType:(id)arg1 dynamicActivityType:(id)arg2;
+ (id)_currentUserActivityUUID;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)invalidate;
- (void)resignCurrent;
- (id)typeIdentifier;
- (id)initWithActivityType:(id)arg1;
- (void)addUserInfoEntriesFromDictionary:(id)arg1;
- (id)contentUserAction;
- (void)setContentUserAction:(id)arg1;
- (void)becomeCurrent;
- (void)getContinuationStreamsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithInternalUserActivity:(id)arg1;
- (id)contentType;
- (void)setContentType:(id)arg1;
- (id)contentAttributes;
- (void)setContentAttributes:(id)arg1;
- (id)initWithTypeIdentifier:(id)arg1;
- (id)webPageURL;
- (void)setWebPageURL:(id)arg1;
- (void)willSynchronizeActivity;
- (void)didSynchronizeActivity;
- (void)didReceiveInputStream:(id)arg1 outputStream:(id)arg2;
- (void)_addKeywordsFromArray:(id)arg1;
- (id)_parentUserActivity;
- (void)_setParentUserActivity:(id)arg1;
- (id)_initWithUserActivityData:(id)arg1;
- (id)_initWithUserActivityStrings:(id)arg1 secondaryString:(id)arg2 optionalData:(id)arg3;
- (_Bool)_createUserActivityDataWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_createUserActivityStringsWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_prepareUserActivityForLaunchingWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_determineMatchingApplicationBundleIdentifierWithOptions:(id)arg1;
- (id)_determineMatchingApplicationBundleIdentfierWithOptions:(id)arg1;
- (id)_initWithTypeIdentifier:(id)arg1 suggestedActionType:(long long)arg2 options:(id)arg3;
- (id)_initWithUserActivityType:(id)arg1 dynamicActivityType:(id)arg2 options:(id)arg3;
- (void)_updateUserInfoValue:(id)arg1 forKey:(id)arg2;
- (void)_removeUserInfoValueForKey:(id)arg1;
- (void)_updateFrameworkPayloadValue:(id)arg1 forKey:(id)arg2;
- (void)_removeFrameworkPayloadValueForKey:(id)arg1;
- (void)_setLastActivityDate:(id)arg1;
- (void)_resignCurrent;
- (id)contentAttributeSet;
- (void)setContentAttributeSet:(id)arg1;

@end
