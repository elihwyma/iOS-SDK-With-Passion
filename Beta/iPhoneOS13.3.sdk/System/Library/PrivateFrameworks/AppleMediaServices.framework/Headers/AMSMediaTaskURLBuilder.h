/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSMediaTaskTypeConfig, NSArray, NSDictionary, NSString;

@protocol AMSBagProtocol;

__attribute__((visibility("hidden")))
@interface AMSMediaTaskURLBuilder : NSObject

{
    NSArray *_additionalPlatforms;
    id <AMSBagProtocol> _bag;
    NSArray *_bundleIdentifiers;
    NSString *_clientVersion;
    AMSMediaTaskTypeConfig *_config;
    NSDictionary *_filters;
    NSArray *_includedResultKeys;
    NSArray *_itemIdentifiers;
    NSString *_logKey;
    NSString *_searchTerm;
}

@property (retain, nonatomic) NSArray *additionalPlatforms;
@property (nonatomic, readonly) id <AMSBagProtocol> bag;
@property (retain, nonatomic) NSArray *bundleIdentifiers;
@property (nonatomic, readonly) NSString *clientVersion;
@property (nonatomic, readonly) AMSMediaTaskTypeConfig *config;
@property (retain, nonatomic) NSDictionary *filters;
@property (retain, nonatomic) NSArray *includedResultKeys;
@property (retain, nonatomic) NSArray *itemIdentifiers;
@property (retain, nonatomic) NSString *logKey;
@property (retain, nonatomic) NSString *searchTerm;

- (id)build;
- (id)_verifyConfiguration;
- (id)_hostPromise;
- (id)_pathPromise;
- (id)_queryItems;
- (void)_addBundleIdentifiers:(id)arg1;
- (void)_addItemIdentifiers:(id)arg1;
- (void)_addSearchIdentifiers:(id)arg1;
- (id)_devicePlatform;
- (id)initWithConfig:(id)arg1 clientVersion:(id)arg2 bag:(id)arg3;

@end
