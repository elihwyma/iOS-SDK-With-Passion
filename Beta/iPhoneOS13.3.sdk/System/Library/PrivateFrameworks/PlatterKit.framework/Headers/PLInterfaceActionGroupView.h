/*
 Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

#import <UIKit/UIView.h>

@class NSArray, NSMutableDictionary, NSString, UIInterfaceActionGroupView;

@interface PLInterfaceActionGroupView : UIView

{
    UIInterfaceActionGroupView *_actionsGroupView;
    _Bool _actionsDirty;
    NSMutableDictionary *_categoriesToProviders;
    double _cornerRadius;
}

@property (retain, nonatomic) NSArray *actions;
@property (nonatomic) double cornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *requiredVisualStyleCategories;

+ (void)initialize;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)visualStylingProviderForCategory:(long long)arg1;
- (void)providedStylesDidChangeForProvider:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (void)_updateStylingOfInterfaceActionGroupView:(id)arg1;
- (id)_newInterfaceActionGroupViewWithActions:(id)arg1;

@end
