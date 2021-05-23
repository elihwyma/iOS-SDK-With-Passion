/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface WebLowPowerModeObserver : NSObject

{
    _Bool _isLowPowerModeEnabled;
    struct LowPowerModeNotifier *_notifier;
}

@property (nonatomic) struct LowPowerModeNotifier *notifier;
@property (nonatomic, readonly) _Bool isLowPowerModeEnabled;

- (void)dealloc;
- (void)_didReceiveLowPowerModeChange;
- (id)initWithNotifier:(struct LowPowerModeNotifier *)arg1;

@end
