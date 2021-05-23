/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface SCWatchlistDefaults : NSObject

{
    NSArray *_defaultSymbols;
}

@property (copy, nonatomic, readonly) NSArray *defaultSymbols;

+ (id)_defaultSymbolsByCountryCode;
+ (id)defaultsForCurrentCountry;
+ (id)_iOS10DefaultsForCurrentCountry;
+ (id)_iOS7DefaultsForCurrentCountry;
+ (id)defaultsFromCarrierBundle;
+ (id)_legacyDefaultSymbolsByCountryCode;
+ (id)defaultsWithDefaultSymbols:(id)arg1;
+ (id)emptyDefaults;
+ (id)defaultsHistoryForCurrentCountry;

- (id)initWithDefaultSymbols:(id)arg1;
- (id)defaultsByAppendingDefaults:(id)arg1;

@end
