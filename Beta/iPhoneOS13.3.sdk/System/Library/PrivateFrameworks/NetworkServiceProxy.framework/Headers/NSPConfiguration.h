/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, NSURLSession;

@interface NSPConfiguration : NSObject

{
    NSString *_waldoHost;
    _Bool _ignoreInvalidCerts;
    NSNumber *_version;
    NSNumber *_timestamp;
    NSNumber *_enabled;
    NSDate *_resurrectionDate;
    NSArray *_appRules;
    NSNumber *_waldoEnabled;
    NSNumber *_waldoPort;
    NSString *_waldoPath;
    NSNumber *_waldoRequestTimeout;
    NSString *_waldoLeafOID;
    NSNumber *_waldoRevocationFailClosed;
    NSURLSession *_waldoSession;
    NSDictionary *_edgeSets;
    NSNumber *_persistMetrics;
    long long _diskVersion;
    NSPConfiguration *_defaults;
}

@property (readonly) long long diskVersion;
@property (retain) NSPConfiguration *defaults;
@property (readonly) NSNumber *version;
@property (readonly) NSNumber *timestamp;
@property (copy) NSNumber *enabled;
@property (copy) NSDate *resurrectionDate;
@property (copy) NSArray *appRules;
@property (copy) NSNumber *waldoEnabled;
@property (copy) NSString *waldoHost;
@property (copy) NSNumber *waldoPort;
@property (copy) NSString *waldoPath;
@property (copy) NSNumber *waldoRequestTimeout;
@property (copy) NSString *waldoLeafOID;
@property (copy) NSNumber *waldoRevocationFailClosed;
@property (retain) NSURLSession *waldoSession;
@property _Bool ignoreInvalidCerts;
@property (retain) NSDictionary *edgeSets;
@property (copy) NSNumber *persistMetrics;
@property (readonly) NSDate *dayPassExpirationDate;
@property (readonly) NSDate *earliestEnableCheckDate;
@property (readonly) _Bool isDead;

+ (_Bool)supportsSecureCoding;
+ (id)defaultConfiguration;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)merge:(id)arg1;
- (void)teardown;
- (void)setup;
- (void)removeFromKeychain;
- (id)copyTLVData;
- (void)saveToKeychain;
- (id)initFromTLVs:(id)arg1;
- (id)initWithTimestamp:(id)arg1 fromDictionary:(id)arg2 waldoSource:(long long)arg3;
- (id)loadBuiltinAppRulesFromDisk;
- (void)enumerateEdgeSetsWithBlock:(CDUnknownBlockType)arg1;
- (id)getEdgeSetForAppRule:(id)arg1;
- (id)initFromKeychain;
- (id)copyAgentResultsForAppRule:(id)arg1;
- (void)updateNetworkAgents;
- (_Bool)evaluateEnableRatios;
- (id)createWaldoURLWithDomain:(id)arg1 timestamp:(id)arg2;
- (id)getEdgeSetForSigningIdentifier:(id)arg1;
- (id)getCurrentKeyBagForAppRule:(id)arg1;
- (_Bool)resetStaleEdgeSets;
- (void)incrementSessionCountersOnFirstLaunch;

@end
