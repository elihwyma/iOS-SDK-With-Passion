/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <Foundation/NSObject.h>

@interface SCRCUserDefaultsBase : NSObject

- (_Bool)boolForKey:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (float)floatForKey:(id)arg1;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)addObserver:(id)arg1 forKey:(id)arg2;
- (void)setInt:(int)arg1 forKey:(id)arg2;
- (int)intForKey:(id)arg1;
- (id)stringForKeyPath:(id)arg1;
- (void)setInt:(int)arg1 forKeyPath:(id)arg2;
- (int)intForKeyPath:(id)arg1;
- (void)setFloat:(float)arg1 forKeyPath:(id)arg2;
- (float)floatForKeyPath:(id)arg1;
- (void)setBool:(_Bool)arg1 forKeyPath:(id)arg2;
- (_Bool)boolForKeyPath:(id)arg1;

@end
