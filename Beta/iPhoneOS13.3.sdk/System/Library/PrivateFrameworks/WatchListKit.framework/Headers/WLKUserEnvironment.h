/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface WLKUserEnvironment : NSObject

{
    _Bool _consented;
    _Bool _internalBuild;
    NSNumber *_DSID;
    NSString *_storeFrontIdentifier;
    NSString *_localeIdentifier;
    NSDictionary *_entitlements;
    NSString *_restrictions;
    NSArray *_consentedBrands;
    NSDictionary *_location;
    unsigned long long _protocolVersion;
    NSArray *_deniedBrands;
    NSString *_platform;
}

@property (nonatomic) unsigned long long protocolVersion;
@property (retain, nonatomic) NSNumber *DSID;
@property (retain, nonatomic) NSString *storeFrontIdentifier;
@property (retain, nonatomic) NSString *localeIdentifier;
@property (retain, nonatomic) NSDictionary *entitlements;
@property (retain, nonatomic) NSString *restrictions;
@property (retain, nonatomic) NSArray *consentedBrands;
@property (retain, nonatomic) NSArray *deniedBrands;
@property (nonatomic) _Bool consented;
@property (nonatomic) _Bool internalBuild;
@property (retain, nonatomic) NSString *platform;
@property (nonatomic, readonly) NSDictionary *location;

+ (id)currentEnvironment;
+ (void)setCurrentEnvironmentForTesting:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)_queryParameters;
- (_Bool)isEqualToEnvironment:(id)arg1;
- (id)_entitlementsQuery;
- (id)_consentQuery;
- (id)_locationQueryParameters;

@end
