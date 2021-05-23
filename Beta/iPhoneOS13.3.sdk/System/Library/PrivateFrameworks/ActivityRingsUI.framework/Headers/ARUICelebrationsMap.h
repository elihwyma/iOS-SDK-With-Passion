/*
 Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface ARUICelebrationsMap : NSObject

{
    NSMapTable *_sparksCelebrationMap;
    NSMapTable *_wavesCelebrationMap;
    unsigned long long _celebrationCount;
}

@property (nonatomic, readonly) unsigned long long celebrationCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)storeSparksCelebration:(id)arg1 withRing:(id)arg2;
- (void)setRingGroupControllers:(id)arg1;
- (void)storeWavesCelebration:(id)arg1 withRing:(id)arg2;
- (id)initWithRingGroupControllers:(id)arg1;
- (id)sparksCelebrationMap;
- (id)wavesCelebrationMap;

@end
