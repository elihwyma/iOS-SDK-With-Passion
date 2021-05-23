/*
 Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSError, NSMutableDictionary, NSSet, NSString, NSURL, NSUUID, SFPeerDevice, _LSUserActivityWasContinuedInfo;

@interface UAUserActivityInfo : NSObject

{
    NSMutableDictionary *_payloads;
    _Bool _eligibleForHandoff;
    _Bool _eligibleForSearch;
    _Bool _eligibleForPublicIndexing;
    _Bool _eligibleForReminders;
    _Bool _eligibleForPrediction;
    _Bool _eligibleToAdvertise;
    _Bool _eligibleToAlwaysAdvertise;
    _Bool _dirty;
    _Bool _payloadAvailable;
    _Bool _payloadRequested;
    _Bool _active;
    NSUUID *_uuid;
    unsigned long long _type;
    NSString *_title;
    NSString *_activityType;
    NSString *_dynamicActivityType;
    NSString *_teamIdentifier;
    NSURL *_webpageURL;
    NSURL *_referrerURL;
    NSString *_targetContentIdentifier;
    NSDictionary *_options;
    NSError *_encodedUserInfoError;
    NSSet *_requiredUserInfoKeys;
    NSDate *_when;
    NSDate *_lastInterestingTime;
    NSDictionary *_encodingOptions;
    NSString *_contentUserAction;
    NSSet *_keywords;
    NSDate *_expirationDate;
    NSString *_persistentIdentifier;
    NSError *_error;
    SFPeerDevice *_peerDevice;
    NSString *_peerDeviceType;
    NSString *_bundleIdentifier;
    _LSUserActivityWasContinuedInfo *_wasContinuedInfo;
}

@property (copy) NSUUID *uuid;
@property unsigned long long type;
@property (copy) NSString *title;
@property (copy) NSString *activityType;
@property (copy) NSString *dynamicActivityType;
@property (copy) NSString *teamIdentifier;
@property (copy) NSURL *webpageURL;
@property (copy) NSURL *referrerURL;
@property (copy) NSString *targetContentIdentifier;
@property (copy) NSDictionary *options;
@property (copy) NSError *encodedUserInfoError;
@property (copy) NSSet *requiredUserInfoKeys;
@property (copy) NSDate *when;
@property (copy) NSDate *lastInterestingTime;
@property (copy) NSDictionary *payloads;
@property _Bool eligibleForHandoff;
@property _Bool eligibleForSearch;
@property _Bool eligibleForPublicIndexing;
@property _Bool eligibleForReminders;
@property _Bool eligibleForPrediction;
@property (readonly) _Bool eligibleToAdvertise;
@property (readonly) _Bool eligibleToAlwaysAdvertise;
@property (copy) NSDictionary *encodingOptions;
@property (copy) NSString *contentUserAction;
@property (copy) NSSet *keywords;
@property (copy) NSDate *expirationDate;
@property (copy) NSString *persistentIdentifier;
@property (copy) NSError *error;
@property (readonly, getter=isDirty) _Bool dirty;
@property (getter=isPayloadAvailable) _Bool payloadAvailable;
@property (getter=isPayloadRequested) _Bool payloadRequested;
@property _Bool active;
@property (retain) SFPeerDevice *peerDevice;
@property (copy) NSString *peerDeviceType;
@property (copy) NSString *bundleIdentifier;
@property (retain) _LSUserActivityWasContinuedInfo *wasContinuedInfo;

+ (_Bool)supportsSecureCoding;
+ (id)encodedInfoToOldEncodedInfo:(id)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)statusString;
- (id)payloadForIdentifier:(id)arg1;
- (id)payloadIdentifiers;
- (_Bool)setPayload:(id)arg1 identifier:(id)arg2;
- (id)archiveUserActivityInfo;
- (void)_createUserActivityStrings:(id)arg1 secondaryString:(id)arg2 optionalData:(id)arg3;
- (_Bool)requestPayloadWithCompletionHandlerEvenIfClean:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)initWithUUID:(id)arg1 type:(unsigned long long)arg2 options:(id)arg3;
- (id)initWithUserActivityInfo:(id)arg1;
- (id)initWithArchivedUserActivityInfo:(id)arg1;
- (id)userActivityString;
- (id)secondaryUserActivityString;
- (id)optionalUserActivityData;
- (_Bool)requestPayloadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchAllNearbyAppSuggestions:(CDUnknownBlockType)arg1;
- (_Bool)wasResumedOnAnotherDeviceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)clearPayload;
- (id)logString;

@end
