/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <Foundation/NSObject.h>

@class HKValueRange;

__attribute__((visibility("hidden")))
@interface WDSleepRoomViewControllerState : NSObject

{
    unsigned long long _contextType;
    long long _timeScope;
    HKValueRange *_visibleRange;
}

@property (nonatomic, readonly) unsigned long long contextType;
@property (nonatomic, readonly) long long timeScope;
@property (nonatomic, readonly) HKValueRange *visibleRange;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithContextType:(unsigned long long)arg1 timeScope:(long long)arg2 visibleRange:(id)arg3;

@end
