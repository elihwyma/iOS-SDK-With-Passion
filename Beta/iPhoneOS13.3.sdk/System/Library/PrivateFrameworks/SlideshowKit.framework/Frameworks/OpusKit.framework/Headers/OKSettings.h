/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface OKSettings : NSObject

{
    NSMutableArray *_transactions;
}

+ (_Bool)exportClassSettings:(Class)arg1 toJavaScriptContext:(id)arg2;
+ (void)applySettings:(id)arg1 toObject:(id)arg2 withResolution:(id)arg3;
+ (void)beginApplyingSettings;
+ (void)resetObject:(id)arg1 notRespondingToSettingsKeys:(id)arg2 withResolution:(id)arg3;
+ (void)commitApplyingSettings;
+ (void)applyValue:(id)arg1 forKey:(id)arg2 ofType:(unsigned long long)arg3 toObject:(id)arg4;
+ (void)resetObject:(id)arg1 respondingToSettingsKeys:(id)arg2 withResolution:(id)arg3;
+ (CDUnknownBlockType)_newSettingGetterBlockForKey:(id)arg1 ofType:(unsigned long long)arg2 optionalSubType:(unsigned long long)arg3 optionalClass:(Class)arg4 optionalMapping:(id)arg5;
+ (CDUnknownBlockType)_newSettingSetterBlockForKey:(id)arg1 ofType:(unsigned long long)arg2 optionalSubType:(unsigned long long)arg3 optionalClass:(Class)arg4 optionalMapping:(id)arg5;
+ (id)transactionsManager;
+ (_Bool)isApplyingSettings;
+ (void)registerApplyingSettingsUpdateBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;
+ (void)resetAndApplySettings:(id)arg1 toObject:(id)arg2 withResolution:(id)arg3;
+ (void)resetObject:(id)arg1 withResolution:(id)arg2;
+ (id)objectFromClass:(Class)arg1 withSettings:(id)arg2 andResolution:(id)arg3;
+ (void)applyUpdateBlockOnce:(CDUnknownBlockType)arg1 forKey:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)beginTransaction;
- (void)commitTransaction;
- (void)registerUpdateBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (id)pendingTransaction;
- (_Bool)hasPendingTransaction;

@end
