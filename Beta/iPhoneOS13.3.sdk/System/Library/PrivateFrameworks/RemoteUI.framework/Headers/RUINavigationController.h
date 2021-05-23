/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import <UIKit/UINavigationController.h>

@class RUIStyle;

@interface RUINavigationController : UINavigationController

{
    unsigned long long _ruiSupportedInterfaceOrientations;
    RUIStyle *_style;
    CDUnknownBlockType _menuDismissalHandler;
}

@property (retain, nonatomic) RUIStyle *style;
@property (copy, nonatomic) CDUnknownBlockType menuDismissalHandler;

- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setSupportedInterfaceOrientations:(unsigned long long)arg1;
- (_Bool)canBeShownFromSuspendedState;
- (void)_menuButtonPressed:(id)arg1;

@end
