/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <CarPlaySupport/CPSBaseTemplateViewController.h>

@class CPGridTemplate, NSArray, NSString;

@interface CPSGridTemplateViewController : CPSBaseTemplateViewController

{
    NSArray *_gridButtons;
}

@property (retain, nonatomic) NSArray *gridButtons;
@property (nonatomic, readonly) CPGridTemplate *gridTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setControl:(id)arg1 enabled:(_Bool)arg2;
- (void)didSelectButton:(id)arg1;
- (void)_viewDidLoad;
- (id)initWithGridTemplate:(id)arg1 interfaceDelegate:(id)arg2;
- (id)_buttonForIdentifier:(id)arg1;

@end
