/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIBarButtonItem.h>

@interface UIBarButtonItem (SafariServicesExtras)

@property (nonatomic, setter=_sf_setLongPressEnabled:) _Bool _sf_longPressEnabled;

+ (double)_sf_longPressAllowableMovement;

- (void)_sf_setTarget:(id)arg1 longPressAction:(SEL)arg2;
- (void)_sf_setTarget:(id)arg1 touchDownAction:(SEL)arg2 longPressAction:(SEL)arg3;
- (void)_sf_test_simulateLongPressInvocation;

@end
