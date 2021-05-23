/*
 Image: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
 */

#import <Foundation/NSExtensionContext.h>

@class _NCWidgetViewController;

__attribute__((visibility("hidden")))
@interface _NCWidgetExtensionContext : NSExtensionContext

{
    struct CGSize _maxCompactSize;
    struct CGSize _maxExpandedSize;
    _NCWidgetViewController *_hostViewController;
    long long _activeDisplayMode;
    long long _largestAvailableDisplayMode;
}

@property (weak, nonatomic, getter=_hostViewController, setter=_setHostViewController:) _NCWidgetViewController *hostViewController;
@property (nonatomic, getter=_activeDisplayMode, setter=_setActiveDisplayMode:) long long activeDisplayMode;
@property (nonatomic, getter=_largestAvailableDisplayMode, setter=_setLargestAvailableDisplayMode:) long long largestAvailableDisplayMode;

- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (struct CGSize)widgetMaximumSizeForDisplayMode:(long long)arg1;
- (struct CGSize)_maximumSizeForDisplayMode:(long long)arg1;
- (void)_setMaximumSize:(struct CGSize)arg1 forDisplayMode:(long long)arg2;
- (void)openURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)widgetLargestAvailableDisplayMode;
- (void)setWidgetLargestAvailableDisplayMode:(long long)arg1;
- (long long)widgetActiveDisplayMode;
- (_Bool)widgetIsForeground;

@end
