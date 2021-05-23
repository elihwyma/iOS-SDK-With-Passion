/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMAccessorySetting.h>

@class NSSet;

@interface HMAccessoryCollectionSetting : HMAccessorySetting

@property (copy, readonly) NSSet *itemValueClasses;

+ (id)itemValueClassesForKeyPath:(id)arg1;
+ (void)setItemValueClass:(Class)arg1 forKeyPath:(id)arg2;
+ (void)setItemValueClasses:(id)arg1 forKeyPath:(id)arg2;

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)value;
- (Class)valueClass;
- (void)updateValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithInternal:(id)arg1;
- (void)setItemValueClass:(Class)arg1;
- (void)setItemValueClasses:(id)arg1;
- (void)_setting:(id)arg1 didAddConstraint:(id)arg2;
- (void)_setting:(id)arg1 didRemoveConstraint:(id)arg2;
- (id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3;
- (void)addItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)replaceItems:(id)arg1 withItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)replaceItem:(id)arg1 withItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
