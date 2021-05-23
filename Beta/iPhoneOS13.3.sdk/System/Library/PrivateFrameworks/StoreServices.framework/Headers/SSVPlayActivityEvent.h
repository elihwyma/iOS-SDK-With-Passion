/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSData, NSDate, NSNumber, NSString, NSTimeZone, SSVPlayActivityEnqueuerProperties, SSVPlayActivityEventContainerIDs, SSVPlayActivityEventItemIDs;

@interface SSVPlayActivityEvent : NSObject

{
    NSString *_buildVersion;
    NSString *_containerID;
    SSVPlayActivityEventContainerIDs *_containerIDs;
    unsigned long long _containerType;
    NSString *_deviceName;
    unsigned long long _displayType;
    unsigned long long _endReasonType;
    SSVPlayActivityEnqueuerProperties *_enqueuerProperties;
    NSDate *_eventDate;
    NSTimeZone *_eventTimeZone;
    unsigned long long _eventType;
    NSString *_externalID;
    NSString *_featureName;
    NSString *_householdID;
    SSVPlayActivityEventItemIDs *_itemIDs;
    double _itemDuration;
    double _itemEndTime;
    double _itemStartTime;
    unsigned long long _itemType;
    unsigned long long _lyricsDisplayedCharacterCount;
    NSString *_lyricsLanguage;
    unsigned long long _mediaType;
    _Bool _offline;
    long long _persistentID;
    NSString *_personalizedContainerID;
    NSNumber *_privateListeningEnabled;
    unsigned long long _reasonHintType;
    NSData *_recommendationData;
    NSString *_requestingBundleIdentifier;
    NSString *_requestingBundleVersion;
    _Bool _SBEnabled;
    NSNumber *_siriInitiated;
    unsigned long long _sourceType;
    long long _systemReleaseType;
    unsigned long long _storeAccountID;
    NSString *_storeFrontID;
    NSString *_storeID;
    NSData *_timedMetadata;
    NSData *_trackInfo;
    long long _version;
}

@property (nonatomic, readonly) long long version;
@property (copy, nonatomic, readonly) NSString *buildVersion;
@property (copy, nonatomic, readonly) SSVPlayActivityEventContainerIDs *containerIDs;
@property (nonatomic, readonly) unsigned long long containerType;
@property (copy, nonatomic, readonly) NSData *dataRepresentation;
@property (copy, nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) unsigned long long displayType;
@property (nonatomic, readonly) unsigned long long endReasonType;
@property (copy, nonatomic, readonly) SSVPlayActivityEnqueuerProperties *enqueuerProperties;
@property (copy, nonatomic, readonly) NSDate *eventDate;
@property (nonatomic, readonly) unsigned long long eventType;
@property (copy, nonatomic, readonly) NSTimeZone *eventTimeZone;
@property (copy, nonatomic, readonly) NSString *featureName;
@property (copy, nonatomic, readonly) NSString *householdID;
@property (copy, nonatomic, readonly) SSVPlayActivityEventItemIDs *itemIDs;
@property (nonatomic, readonly) double itemDuration;
@property (nonatomic, readonly) double itemEndTime;
@property (nonatomic, readonly) double itemStartTime;
@property (nonatomic, readonly) unsigned long long itemType;
@property (nonatomic, readonly) unsigned long long lyricsDisplayedCharacterCount;
@property (copy, nonatomic, readonly) NSString *lyricsLanguage;
@property (nonatomic, readonly) unsigned long long mediaType;
@property (nonatomic, readonly, getter=isOffline) _Bool offline;
@property (nonatomic, readonly) long long persistentID;
@property (copy, nonatomic, readonly, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled;
@property (nonatomic, readonly) unsigned long long reasonHintType;
@property (copy, nonatomic, readonly) NSData *recommendationData;
@property (copy, nonatomic, readonly) NSString *requestingBundleIdentifier;
@property (copy, nonatomic, readonly) NSString *requestingBundleVersion;
@property (nonatomic, readonly, getter=isSBEnabled) _Bool SBEnabled;
@property (copy, nonatomic, readonly, getter=isSiriInitiated) NSNumber *siriInitiated;
@property (nonatomic, readonly) unsigned long long sourceType;
@property (nonatomic, readonly) unsigned long long storeAccountID;
@property (copy, nonatomic, readonly) NSString *storeFrontID;
@property (nonatomic, readonly) long long systemReleaseType;
@property (copy, nonatomic, readonly) NSData *timedMetadata;
@property (copy, nonatomic, readonly) NSData *trackInfo;
@property (copy, nonatomic, readonly) NSString *containerID;
@property (copy, nonatomic, readonly) NSString *externalID;
@property (nonatomic, readonly, getter=isInternalBuild) _Bool internalBuild;
@property (copy, nonatomic, readonly) NSString *personalizedContainerID;
@property (copy, nonatomic, readonly) NSString *storeID;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (Class)_mutableCopyClass;

@end
