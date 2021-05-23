/*
 Image: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDate, SPBeaconManager, WPDPendingCompletions;

@protocol OS_dispatch_queue;

@interface WPDSearchPartyAgent : NSObject

{
    _Bool _isTestMode;
    _Bool _disableScans;
    _Bool _spBeaconState;
    unsigned char _spBeaconStatus;
    _Bool _testBeaconState;
    unsigned char _testBeaconStatus;
    NSData *_beaconKey;
    NSObject<OS_dispatch_queue> *_queue;
    NSData *_spBeaconReserved;
    NSData *_testBeaconReserved;
    SPBeaconManager *_beaconManager;
    CDUnknownBlockType _beaconChange;
    NSArray *_spBeaconKeys;
    NSDate *_spBeaconKeysUpdated;
    CDUnknownBlockType _beaconStateChangedBlock;
    CDUnknownBlockType _beaconKeysChangedBlock;
    CDUnknownBlockType _beaconStatusChangedBlock;
    CDUnknownBlockType _nearbyTokensChangedBlock;
    CDUnknownBlockType _tokensChange;
    NSArray *_spNearbyTokens;
    NSDate *_spNearbyTokensUpdated;
    NSArray *_testNearbyTokens;
    NSArray *_testBeaconKeys;
    NSDate *_testNearbyTokensUpdated;
    NSDate *_testBeaconKeysUpdated;
    WPDPendingCompletions *_pendingKeyCompletions;
    WPDPendingCompletions *_pendingTokenCompletions;
}

@property (retain) NSData *beaconKey;
@property (weak, readonly) NSObject<OS_dispatch_queue> *queue;
@property _Bool disableScans;
@property _Bool isTestMode;
@property _Bool spBeaconState;
@property unsigned char spBeaconStatus;
@property (readonly) NSData *spBeaconReserved;
@property _Bool testBeaconState;
@property unsigned char testBeaconStatus;
@property (retain) NSData *testBeaconReserved;
@property (retain) SPBeaconManager *beaconManager;
@property (copy) CDUnknownBlockType beaconChange;
@property (retain) NSArray *spBeaconKeys;
@property (retain) NSDate *spBeaconKeysUpdated;
@property (copy) CDUnknownBlockType beaconStateChangedBlock;
@property (copy) CDUnknownBlockType beaconKeysChangedBlock;
@property (copy) CDUnknownBlockType beaconStatusChangedBlock;
@property (copy) CDUnknownBlockType nearbyTokensChangedBlock;
@property (copy) CDUnknownBlockType tokensChange;
@property (retain) NSArray *spNearbyTokens;
@property (retain) NSDate *spNearbyTokensUpdated;
@property (retain) NSArray *testNearbyTokens;
@property (retain) NSArray *testBeaconKeys;
@property (retain) NSDate *testNearbyTokensUpdated;
@property (retain) NSDate *testBeaconKeysUpdated;
@property (readonly) NSArray *beaconKeys;
@property (readonly) NSDate *nearbyTokensUpdated;
@property (readonly) NSDate *beaconKeysUpdated;
@property (retain) WPDPendingCompletions *pendingKeyCompletions;
@property (retain) WPDPendingCompletions *pendingTokenCompletions;
@property (readonly) _Bool beaconState;
@property (readonly) unsigned char beaconStatus;
@property (readonly) NSData *beaconReserved;
@property (readonly) NSArray *nearbyTokens;

+ (id)spBeaconKeyFromTestKey:(id)arg1;

- (void)dealloc;
- (void)startTest;
- (void)stopTest;
- (id)generateStateDump;
- (void)initSPObjects;
- (void)rollKeys_async_completion:(CDUnknownBlockType)arg1;
- (void)rollTokens_async_completion:(CDUnknownBlockType)arg1;
- (void)rollKeysWithRequestID:(unsigned long long)arg1;
- (void)rollTokensWithRequestID:(unsigned long long)arg1;
- (void)updateTestBeaconKeys:(id)arg1;
- (void)updateTestNearOwnerTokens:(id)arg1;
- (void)updateTestBeaconState:(id)arg1;
- (void)updateTestBeaconStatus:(id)arg1;
- (void)updateTestBeaconExtended:(id)arg1;
- (void)rollKeys_async;
- (void)rollTokens_async;
- (id)initWithQueue:(id)arg1 beaconChange:(CDUnknownBlockType)arg2 tokensChange:(CDUnknownBlockType)arg3;
- (void)completedKeyRequestID:(unsigned long long)arg1 success:(_Bool)arg2;
- (void)completedTokenRequestID:(unsigned long long)arg1 success:(_Bool)arg2;

@end
