/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol HUToolbarStateManagerDelegate;

@interface HUToolbarStateManager : NSObject

{
    id <HUToolbarStateManagerDelegate> _delegate;
    NSMutableArray *_pushedViewControllerStack;
}

@property (retain, nonatomic) NSMutableArray *pushedViewControllerStack;
@property (weak, nonatomic) id <HUToolbarStateManagerDelegate> delegate;

+ (id)sharedInstance;

- (id)init;
- (_Bool)_shouldRestoreToolbarButtons;
- (void)restoreStandardToolbarItems;
- (id)_instanceForBackButtonValues;
- (void)showBackButtonWithTarget:(id)arg1 action:(SEL)arg2;
- (void)showSettingsButtonWithTarget:(id)arg1 action:(SEL)arg2;
- (void)willPresentModalViewController:(id)arg1;
- (void)willDismissModalViewController:(id)arg1;

@end
