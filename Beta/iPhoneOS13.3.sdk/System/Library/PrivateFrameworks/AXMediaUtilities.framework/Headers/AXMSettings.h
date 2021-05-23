/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSUserDefaults;

@protocol OS_dispatch_queue;

@interface AXMSettings : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_defaults;
    NSMutableDictionary *_queue_settingObservers;
}

@property (nonatomic) _Bool writeOutInputImages;
@property (nonatomic) _Bool writeOutOCRInputImages;
@property (nonatomic) _Bool writeOutScreenCaptures;

+ (id)settings;

- (id)_init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_queue_removeObserver:(id)arg1 forSetting:(id)arg2;
- (void)addObserver:(id)arg1 forSeetting:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)removeObserver:(id)arg1 forSetting:(id)arg2;
- (void)removeObserverForAllSettings:(id)arg1;

@end
