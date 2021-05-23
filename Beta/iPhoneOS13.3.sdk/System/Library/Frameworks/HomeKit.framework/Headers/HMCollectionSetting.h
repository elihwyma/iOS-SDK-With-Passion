/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMSetting.h>

@class NSSet;

@interface HMCollectionSetting : HMSetting

{
    NSSet *_itemValueClasses;
}

@property (copy, readonly) NSSet *itemValueClasses;

+ (id)defaultItemValueClasses;
+ (id)itemValueClassesForKeyPath:(id)arg1;
+ (void)setItemValueClass:(Class)arg1 forKeyPath:(id)arg2;
+ (void)setItemValueClasses:(id)arg1 forKeyPath:(id)arg2;

- (_Bool)isKindOfClass:(Class)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)setItemValueClass:(Class)arg1;
- (void)setItemValueClasses:(id)arg1;

@end
