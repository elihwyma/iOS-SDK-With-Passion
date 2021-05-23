/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSVPlayActivityEvent.h>

@class NSData, NSDate, NSNumber, NSString, NSTimeZone, SSVPlayActivityEnqueuerProperties, SSVPlayActivityEventContainerIDs, SSVPlayActivityEventItemIDs;

@interface SSVMutablePlayActivityEvent : SSVPlayActivityEvent

@property (nonatomic) long long persistentID;
@property (nonatomic) long long version;
@property (copy, nonatomic) NSString *buildVersion;
@property (copy, nonatomic) SSVPlayActivityEventContainerIDs *containerIDs;
@property (nonatomic) unsigned long long containerType;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) unsigned long long endReasonType;
@property (copy, nonatomic) SSVPlayActivityEnqueuerProperties *enqueuerProperties;
@property (copy, nonatomic) NSDate *eventDate;
@property (copy, nonatomic) NSTimeZone *eventTimeZone;
@property (nonatomic) unsigned long long eventType;
@property (copy, nonatomic) NSString *featureName;
@property (copy, nonatomic) NSString *householdID;
@property (copy, nonatomic) SSVPlayActivityEventItemIDs *itemIDs;
@property (nonatomic) double itemDuration;
@property (nonatomic) double itemEndTime;
@property (nonatomic) double itemStartTime;
@property (nonatomic) unsigned long long itemType;
@property (nonatomic) unsigned long long mediaType;
@property (nonatomic, getter=isOffline) _Bool offline;
@property (copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled;
@property (nonatomic) unsigned long long reasonHintType;
@property (copy, nonatomic) NSData *recommendationData;
@property (copy, nonatomic) NSString *requestingBundleIdentifier;
@property (copy, nonatomic) NSString *requestingBundleVersion;
@property (nonatomic, getter=isSBEnabled) _Bool SBEnabled;
@property (copy, nonatomic, getter=isSiriInitiated) NSNumber *siriInitiated;
@property (nonatomic) unsigned long long sourceType;
@property (nonatomic) unsigned long long storeAccountID;
@property (copy, nonatomic) NSString *storeFrontID;
@property (nonatomic) long long systemReleaseType;
@property (copy, nonatomic) NSData *timedMetadata;
@property (copy, nonatomic) NSData *trackInfo;
@property (nonatomic) unsigned long long displayType;
@property (nonatomic) unsigned long long lyricsDisplayedCharacterCount;
@property (copy, nonatomic) NSString *lyricsLanguage;
@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) NSString *externalID;
@property (nonatomic, getter=isInternalBuild) _Bool internalBuild;
@property (copy, nonatomic) NSString *personalizedContainerID;
@property (copy, nonatomic) NSString *storeID;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (Class)_mutableCopyClass;

@end
