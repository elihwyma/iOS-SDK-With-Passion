/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class UIViewController;

__attribute__((visibility("hidden")))
@interface HUToolbarStateInstance : NSObject

{
    UIViewController *_associatedViewController;
    id _backButtonTarget;
    SEL _backButtonSelector;
    id _settingsButtonTarget;
    SEL _settingsButtonSelector;
}

@property (retain, nonatomic) UIViewController *associatedViewController;
@property (retain, nonatomic) id backButtonTarget;
@property (nonatomic) SEL backButtonSelector;
@property (retain, nonatomic) id settingsButtonTarget;
@property (nonatomic) SEL settingsButtonSelector;

- (id)description;
- (id)initWithViewController:(id)arg1;

@end
