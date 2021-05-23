/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface ExchangeManager : NSObject

{
    NSMutableDictionary *_exchangesByName;
}

+ (id)sharedManager;

- (id)init;
- (void)saveChanges;
- (id)exchangeWithName:(id)arg1 createIfNotFound:(_Bool)arg2;
- (void)_loadExchangesFromDefaults;
- (void)addExchange:(id)arg1;
- (id)exchangeWithName:(id)arg1;
- (void)_addExchange:(id)arg1;
- (id)exchangeList;
- (_Bool)containsExchange:(id)arg1;
- (void)removeExchange:(id)arg1;
- (void)reloadExchangesFromDefaults;

@end
