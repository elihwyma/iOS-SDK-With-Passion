/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICURLBagLibraryDAAPConfiguration, ICURLBagRadioConfiguration, NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString;

@protocol OS_dispatch_queue;

@interface ICURLBag : NSObject

{
    NSDictionary *_bagValues;
    NSMutableDictionary *_convertedActionsCache;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_GUIDURLRegexPatterns;
    NSSet *_GUIDURLSchemes;
}

@property (retain, nonatomic) NSDictionary *bagValues;
@property (retain, nonatomic) NSMutableDictionary *convertedActionsCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSArray *GUIDURLRegexPatterns;
@property (retain, nonatomic) NSSet *GUIDURLSchemes;
@property (copy, nonatomic, readonly) NSDictionary *allValues;
@property (nonatomic, readonly) _Bool canPostKeybagSyncData;
@property (nonatomic, readonly) ICURLBagRadioConfiguration *radioConfiguration;
@property (nonatomic, readonly) ICURLBagLibraryDAAPConfiguration *libraryDAAPConfiguration;
@property (copy, nonatomic, readonly) NSString *storefrontHeaderSuffix;

- (id)initWithDictionary:(id)arg1;
- (id)urlForBagKey:(id)arg1;
- (id)valueForBagKey:(id)arg1;
- (_Bool)boolValueForBagKey:(id)arg1;
- (_Bool)shouldAppendDeviceGUIDForURL:(id)arg1;
- (_Bool)shouldAppendMachineDataHeadersForURL:(id)arg1;
- (id)mescalConfigurationForRequest:(id)arg1;
- (long long)int64ValueForBagKey:(id)arg1;
- (void)_validateGUIDURLConfigIfNeeded;
- (_Bool)_shouldMescalSignBodyForURL:(id)arg1 withSignatureConfiguration:(id)arg2;
- (id)mescalConfigurationForResponse:(id)arg1;
- (_Bool)hasValueForBagKey:(id)arg1;
- (id)mescalConfigurationForRequestURL:(id)arg1;
- (id)mescalConfigurationForResponseURL:(id)arg1;

@end
