/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <NSObject.h>

@class NSUserDefaults;

@protocol AFUIPreferencesDelegate;

@interface AFUIPreferences : NSObject

{
    NSUserDefaults *_userDefaults;
    id <AFUIPreferencesDelegate> _delegate;
}

@property (weak, nonatomic) id <AFUIPreferencesDelegate> delegate;

- (id)init;
- (void)synchronize;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1;
- (id)initWithSuiteName:(id)arg1;
- (id)stringForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (id)initWithDefaultsAtURL:(id)arg1;
- (void)_mutateValueForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithDefaultsResource:(id)arg1 withExtension:(id)arg2 inBundle:(id)arg3;

@end
