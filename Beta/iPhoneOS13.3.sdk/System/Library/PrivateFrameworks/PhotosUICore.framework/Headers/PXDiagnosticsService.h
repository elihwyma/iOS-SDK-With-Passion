/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIViewController;

@interface PXDiagnosticsService : NSObject

{
    _Bool _canProvideConsoleDescription;
    _Bool _canProvideSettingsViewController;
    _Bool _canPerformAction;
    NSArray *_itemProviders;
    NSString *_consoleDescription;
    UIViewController *_settingsViewController;
}

@property (copy, nonatomic, readonly) NSArray *itemProviders;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) _Bool canProvideConsoleDescription;
@property (nonatomic, readonly) NSString *consoleDescription;
@property (nonatomic, readonly) _Bool canProvideContextualViewController;
@property (nonatomic, readonly) UIViewController *contextualViewController;
@property (nonatomic, readonly) _Bool canProvideSettingsViewController;
@property (nonatomic, readonly) UIViewController *settingsViewController;
@property (nonatomic, readonly) _Bool canPerformAction;

- (id)init;
- (void)performAction;
- (id)initWithItemProviders:(id)arg1;

@end
