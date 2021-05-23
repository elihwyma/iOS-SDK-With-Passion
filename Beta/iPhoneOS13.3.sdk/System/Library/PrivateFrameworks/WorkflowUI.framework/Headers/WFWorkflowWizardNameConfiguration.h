/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WFWorkflowWizardNameConfiguration : NSObject

{
    _Bool _showsHeySiri;
    _Bool _showsSuggestions;
    NSString *_title;
    NSString *_footerText;
    NSString *_doneBarButtonTitle;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *footerText;
@property (nonatomic) _Bool showsHeySiri;
@property (nonatomic) _Bool showsSuggestions;
@property (copy, nonatomic) NSString *doneBarButtonTitle;

+ (id)newWorkflowConfiguration;
+ (id)addToSiriConfiguration;
+ (id)tellSiriInfoText;

- (id)init;

@end
