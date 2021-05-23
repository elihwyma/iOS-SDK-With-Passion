/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <UIView.h>

@class NSString;

@protocol SiriUITemplateModel, SiriUITemplatedView;

@interface SiriUIBaseTemplateView : UIView

{
    id <SiriUITemplatedView> _templatedSuperview;
    id <SiriUITemplateModel> _dataSource;
}

@property (weak, nonatomic) id <SiriUITemplateModel> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SiriUITemplatedView> templatedSuperview;

- (id)initWithDataSource:(id)arg1;
- (void)reloadData;
- (double)desiredHeight;
- (void)removeFromTemplatedSuperview;

@end
