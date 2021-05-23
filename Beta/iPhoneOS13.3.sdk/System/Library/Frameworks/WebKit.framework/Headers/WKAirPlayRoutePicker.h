/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKAirPlayRoutePicker : NSObject

{
    struct RetainPtr<MPMediaControlsViewController> _actionSheet;
}

- (void)dealloc;
- (id).cxx_construct;
- (void)showFromView:(id)arg1 routeSharingPolicy:(unsigned char)arg2 routingContextUID:(id)arg3 hasVideo:(_Bool)arg4;

@end
