/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NetPreferences : NSObject

{
    NSString *_buildVersion;
    NSString *_productVersion;
    _Bool _serviceDebugging;
    _Bool _isNetworkReachable;
    NSString *_requestCountryCode;
    NSString *_requestLanguageCode;
    NSString *_acceptLanguageCode;
    NSString *_UUID;
}

@property (retain) NSString *requestCountryCode;
@property (retain) NSString *requestLanguageCode;
@property (retain) NSString *acceptLanguageCode;
@property (nonatomic, getter=isNetworkReachable) _Bool networkReachable;
@property (nonatomic, readonly) NSString *UUID;

+ (id)sharedPreferences;
+ (void)clearSharedPreferences;

- (id)init;
- (id)_cacheDirectoryPath;
- (void)resetLocale;
- (id)serviceDebuggingPath;
- (_Bool)serviceDebugging;
- (id)defaultBacksideLogoURL;
- (id)backsideLogoURL;
- (id)stocksYQLBaseURL;
- (id)signedRequestForURL:(id)arg1 parameters:(id)arg2;
- (id)stocksLanguageCodeForLanguage:(id)arg1;
- (id)_stocksUserAgent;
- (id)stocksCountryCode;
- (id)_stocksAcceptLanguage;
- (id)stocksLanguageCode;
- (void)addStocksHeadersToPostRequest:(id)arg1;
- (id)financeRequestAttributes;
- (id)_urlStringWithHost:(id)arg1;
- (id)fullQuoteURLOverrideForStock:(id)arg1;
- (id)logoButtonImage;
- (id)logoBacksideImage;

@end
