/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSUserDefaults;

@interface StocksPreferences : NSObject

{
    _Bool _changeColorSwapped;
    unsigned long long _textDirection;
    NSUserDefaults *_sharedDefaults;
    _Bool _textAttachmentDirectionIsRightToLeft;
}

@property (nonatomic, readonly, getter=isChangeColorSwapped) _Bool changeColorSwapped;
@property (nonatomic, readonly) unsigned long long textDirection;
@property (nonatomic, readonly) _Bool textAttachmentDirectionIsRightToLeft;

+ (id)sharedPreferences;
+ (void)clearSharedPreferences;

- (id)init;
- (void)synchronize;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (_Bool)boolForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)resetLocale;

@end
