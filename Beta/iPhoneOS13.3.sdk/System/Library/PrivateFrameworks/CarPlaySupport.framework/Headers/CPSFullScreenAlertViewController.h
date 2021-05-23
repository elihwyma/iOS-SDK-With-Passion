/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <CarPlaySupport/CPSBaseTemplateViewController.h>

@class CPAlertTemplate, NSArray, NSString;

@interface CPSFullScreenAlertViewController : CPSBaseTemplateViewController

{
    NSArray *_alertButtons;
}

@property (nonatomic, readonly) CPAlertTemplate *alert;
@property (retain, nonatomic) NSArray *alertButtons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)preferredFocusEnvironments;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)_titleFont;
- (void)didSelectButton:(id)arg1;
- (void)_viewDidLoad;
- (id)initWithAlert:(id)arg1 alertDelegate:(id)arg2;

@end
