/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface TUContactsDataProviderFetchRequest : NSObject

{
    _Bool _useNetworkCountryCode;
    _Bool _voicemail;
    _Bool _emergency;
    _Bool _blocked;
    _Bool _conversation;
    _Bool _verified;
    _Bool _incoming;
    NSString *_contactIdentifier;
    NSArray *_auxiliaryKeysToFetch;
    NSString *_phoneNumberPrefixHint;
    NSString *_callerNameFromNetwork;
    NSString *_isoCountryCode;
    NSArray *_handles;
}

@property (nonatomic, readonly, getter=isVoicemail) _Bool voicemail;
@property (nonatomic, readonly, getter=isEmergency) _Bool emergency;
@property (nonatomic, readonly, getter=isBlocked) _Bool blocked;
@property (nonatomic, readonly, getter=isConversation) _Bool conversation;
@property (nonatomic, readonly, getter=isVerified) _Bool verified;
@property (nonatomic, readonly, getter=isIncoming) _Bool incoming;
@property (copy, nonatomic, readonly) NSString *callerNameFromNetwork;
@property (copy, nonatomic, readonly) NSString *isoCountryCode;
@property (copy, nonatomic, readonly) NSArray *handles;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) NSArray *auxiliaryKeysToFetch;
@property (copy, nonatomic) NSString *phoneNumberPrefixHint;
@property (nonatomic) _Bool useNetworkCountryCode;

- (id)init;
- (id)description;
- (id)initWithHandle:(id)arg1;
- (id)initWithCall:(id)arg1;
- (id)initWithHandles:(id)arg1;

@end
