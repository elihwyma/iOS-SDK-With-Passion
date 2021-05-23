/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class CKServerChangeToken, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface MSPCloudContainerCache : NSObject

{
    CKServerChangeToken *_serverToken;
    NSString *_cacheName;
    NSString *_accountIdentifier;
    long long _accountEnvironment;
    NSMutableDictionary *_stagedRecords;
    NSMutableSet *_stagedTombstones;
    NSDictionary *_cachedRecords;
    NSSet *_cachedTombstoneRecords;
}

@property (copy, nonatomic) NSString *cacheName;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (nonatomic) long long accountEnvironment;
@property (retain, nonatomic) NSMutableDictionary *stagedRecords;
@property (retain, nonatomic) NSMutableSet *stagedTombstones;
@property (retain, nonatomic) NSDictionary *cachedRecords;
@property (retain, nonatomic) NSSet *cachedTombstoneRecords;
@property (retain, nonatomic) CKServerChangeToken *serverToken;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)load;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)reset;
- (void)save;
- (id)cacheURL;
- (id)initWithName:(id)arg1 accountIdentifier:(id)arg2;
- (void)addRecordsFromChangeSet:(id)arg1;
- (void)addRecord:(id)arg1 withIdentifier:(id)arg2;
- (_Bool)hasRecord:(id)arg1 withIdentifier:(id)arg2;
- (id)cachedRecordForRecord:(id)arg1;
- (id)initWithName:(id)arg1 accountIdentifier:(id)arg2 accountEnvironment:(long long)arg3;
- (void)merge;
- (id)cachedRecordForIdentifier:(id)arg1;

@end
