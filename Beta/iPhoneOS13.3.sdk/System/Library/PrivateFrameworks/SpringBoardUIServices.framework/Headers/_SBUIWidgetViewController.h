/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UIViewController.h>

@class NSString;

@protocol _SBUIWidgetHost;

@interface _SBUIWidgetViewController : UIViewController

{
    NSString *_widgetIdentifier;
    id <_SBUIWidgetHost> _widgetHost;
}

@property (copy, nonatomic) NSString *widgetIdentifier;
@property (weak, nonatomic) id <_SBUIWidgetHost> widgetHost;
@property (nonatomic, readonly) struct CGSize preferredViewSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)requestLaunchOfURL:(id)arg1;
- (void)invalidatePreferredViewSize;
- (void)hostWillPresent;
- (void)hostDidPresent;
- (void)hostWillDismiss;
- (void)hostDidDismiss;
- (void)setVisibleWidgetsIDs:(id)arg1;

@end
