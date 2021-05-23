/*
 Image: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSUserDefaults;

@interface SBSDefaults : NSObject

{
    NSUserDefaults *_defaults;
    NSDictionary *_defaultsInfo;
}

@property (retain, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) NSDictionary *defaultsInfo;

+ (id)sharedInstance;
+ (void)resetAllDefaults;
+ (id)sharedDefaults;
+ (id)defaultsKeys;
+ (id)defaultsInfo;
+ (id)getHumanReadable:(unsigned long long)arg1;
+ (id)stringForDefault:(unsigned long long)arg1;
+ (_Bool)boolForDefault:(unsigned long long)arg1;
+ (double)doubleForDefault:(unsigned long long)arg1;
+ (long long)integerForDefault:(unsigned long long)arg1;
+ (_Bool)isDefaultSet:(unsigned long long)arg1;
+ (void)setBool:(_Bool)arg1 forDefault:(unsigned long long)arg2;
+ (void)setInteger:(long long)arg1 forDefault:(unsigned long long)arg2;
+ (void)setString:(id)arg1 forDefault:(unsigned long long)arg2;
+ (void)resetDefault:(unsigned long long)arg1;
+ (id)getHumanReadable;

- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)getDefaults;

@end
