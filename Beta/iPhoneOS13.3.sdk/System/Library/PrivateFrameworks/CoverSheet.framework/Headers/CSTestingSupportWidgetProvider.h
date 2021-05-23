/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <Foundation/NSObject.h>

@class NSString, WGWidgetDiscoveryController;

@interface CSTestingSupportWidgetProvider : NSObject

{
    WGWidgetDiscoveryController *_widgetDiscoveryController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)newWidgetGroupViewControllerWithSettings:(struct WGWidgetListSettings)arg1;

@end
