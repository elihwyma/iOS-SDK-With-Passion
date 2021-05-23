/*
 Image: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
 */

#import <iCloudQuotaDaemon/ICQDaemonPersisted.h>

@class NSArray;

@interface ICQDaemonOfferStubs : ICQDaemonPersisted

{
    NSArray *_serverStubs;
    NSArray *_buddyStubs;
}

@property (nonatomic, readonly) NSArray *serverStubs;
@property (nonatomic, readonly) NSArray *buddyStubs;

+ (id)persistenceKey;
+ (id)daemonOfferStubsDictionarySample;

- (id)initWithDictionary:(id)arg1;
- (id)_initWithAccount:(id)arg1 serverDictionary:(id)arg2;
- (id)chooseFirstStub;
- (id)_initWithAccount:(id)arg1 error:(id)arg2;
- (id)chooseBuddyStub;
- (id)chooseStub;
- (id)chooseBuddyStubForOfferType:(long long)arg1;
- (id)chooseStubForOfferType:(long long)arg1;
- (id)_chooseStubFromServerStubs:(id)arg1 conditions:(id)arg2;
- (void)_initServerStubsFromServerDictionary;
- (void)setServerDictionary:(id)arg1;
- (_Bool)_isValidServerStubs:(id)arg1 key:(id)arg2;
- (id)sortedServerStubs:(id)arg1;
- (id)chooseStubForConditions:(id)arg1;
- (id)chooseBuddyStubForConditions:(id)arg1;
- (id)_chooseStubFromServerStubs:(id)arg1 offerType:(long long)arg2;

@end
