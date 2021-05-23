/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSString, SUClientInterface;

@interface SUSearchFieldConfiguration : NSObject

{
    NSString *_cancelString;
    SUClientInterface *_clientInterface;
    struct __CFDictionary *_hintURLs;
    long long _location;
    NSString *_placeholder;
    _Bool _rootViewOnly;
    struct __CFDictionary *_searchURLs;
    NSString *_userDefaultsKey;
    double _width;
    double _widthLandscape;
    double _widthPortrait;
}

@property (nonatomic, readonly) NSString *cancelString;
@property (nonatomic, readonly, getter=isRootViewOnly) _Bool rootViewOnly;
@property (nonatomic, readonly) long long location;
@property (nonatomic, readonly) NSString *placeholderString;
@property (nonatomic, readonly) NSString *userDefaultsKey;
@property (nonatomic, readonly) double width;

+ (id)defaultConfiguration;
+ (id)defaultConfigurationWithClientInterface:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)loadFromDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 clientInterface:(id)arg2;
- (id)searchURLRequestPropertiesForNetworkType:(long long)arg1;
- (id)_initWithClientInterface:(id)arg1;
- (id)_urlRequestPropertiesForURLBagKey:(id)arg1 networkType:(long long)arg2;
- (void)_setHintURLsFromDictionary:(id)arg1;
- (long long)_locationForString:(id)arg1;
- (void)_setSearchURLsFromDictionary:(id)arg1;
- (id)_newQueryStringDictionaryForNetworkType:(long long)arg1;
- (struct __CFDictionary *)_newURLsDictionaryWithDictionary:(id)arg1;
- (id)URLRequestPropertiesWithBaseURL:(id)arg1 forNetworkType:(long long)arg2;
- (id)hintsURLRequestPropertiesForNetworkType:(long long)arg1;
- (double)widthForOrientation:(long long)arg1;

@end
