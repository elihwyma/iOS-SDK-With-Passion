/*
 Image: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface ADDefaults : NSObject

{
    NSMutableDictionary *_factoryDefaults;
    struct __CFString *_defaultsBundleID;
}

@property (retain, nonatomic) NSMutableDictionary *factoryDefaults;
@property (nonatomic) struct __CFString *defaultsBundleID;

+ (id)sharedInstance;
+ (_Bool)boolForKey:(id)arg1;
+ (id)stringForKey:(id)arg1;
+ (id)arrayForKey:(id)arg1;
+ (id)dictionaryForKey:(id)arg1;
+ (long long)integerForKey:(id)arg1;
+ (double)doubleForKey:(id)arg1;
+ (void)setInteger:(long long)arg1 forKey:(id)arg2;
+ (void)setDouble:(double)arg1 forKey:(id)arg2;
+ (void)setBool:(_Bool)arg1 forKey:(id)arg2;
+ (void)setString:(id)arg1 forKey:(id)arg2;
+ (void)setArray:(id)arg1 forKey:(id)arg2;
+ (void)setDictionary:(id)arg1 forKey:(id)arg2;
+ (id)_defaultValueForKey:(id)arg1 valueClass:(Class)arg2;
+ (void)_setDefaultValue:(id)arg1 forKey:(id)arg2;
+ (void)addFactoryDefaults:(id)arg1;
+ (id)factoryDefaults;
+ (_Bool)defaultIsSetForKey:(id)arg1;

- (id)init;
- (void)dealloc;

@end
