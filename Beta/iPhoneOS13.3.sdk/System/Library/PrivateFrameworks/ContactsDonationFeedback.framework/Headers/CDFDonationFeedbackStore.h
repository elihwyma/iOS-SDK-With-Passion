/*
 Image: /System/Library/PrivateFrameworks/ContactsDonationFeedback.framework/ContactsDonationFeedback
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableSet, NSNumber, NSUbiquitousKeyValueStore;

@interface CDFDonationFeedbackStore : NSObject

{
    NSUbiquitousKeyValueStore *_kvs;
    NSMutableSet *_hashes;
    NSNumber *_resetGeneration;
    NSNumber *_resetTimestamp;
    NSData *_userSalt;
}

+ (id)log_t;

- (id)init;
- (id)description;
- (void)synchronize;
- (void)reset;
- (id)initWithKeyValueStore:(id)arg1;
- (void)_handleHashesChangedNotification:(id)arg1;
- (id)_loadSalt;
- (id)_loadResetInfo;
- (id)_loadHashesForKey:(id)arg1;
- (void)_confirmOrRejectDonatedValues:(id)arg1 contactIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_hashesForDonation:(id)arg1 contactIdentifier:(id)arg2;
- (void)_saveHashes:(id)arg1 key:(id)arg2;
- (void)_saveResetInfo;
- (id)_hashableStringsForDonation:(id)arg1 contactIdentifier:(id)arg2;
- (id)_sha256BytesForStrings:(id)arg1 salt:(id)arg2;
- (id)_randomDataOfLength:(unsigned long long)arg1;
- (void)_hashStrings:(id)arg1 salt:(id)arg2 digest:(char *)arg3;
- (void)confirmDonatedValues:(id)arg1 contactIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)rejectDonatedValues:(id)arg1 contactIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)donatedValueHasBeenConfirmedOrRejected:(id)arg1 contactIdentifier:(id)arg2;

@end
