/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <UIKit/UIAlertController.h>

#import <WiFiKitUI/Swift-Protocol.h>

@protocol WFErrorProviderContext;

@interface WFErrorAlertController : UIAlertController <Swift>

{
    id <WFErrorProviderContext> _context;
}

@property (retain, nonatomic) id <WFErrorProviderContext> context;
@property (nonatomic, readonly) _Bool wantsModalPresentation;

+ (id)errorAlertControllerWithContext:(id)arg1;

- (_Bool)_canShowWhileLocked;

@end
