/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

#import <OnBoardingKit/OBTableWelcomeController.h>

@class NSString;

@interface OBSetupAssistantAppsAndDataController : OBTableWelcomeController

{
    NSString *_detailedLabelHeader;
    NSString *_detailedLabelBody;
}

@property (retain, nonatomic) NSString *detailedLabelHeader;
@property (retain, nonatomic) NSString *detailedLabelBody;

- (void)viewDidLoad;
- (void)setTableView:(id)arg1;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3;

@end
