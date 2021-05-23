/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSOrderedSet, NSString, UITableView, WFCoercionVariableAggrandizement, WFDateFormatVariableAggrandizement, WFDictionaryValueVariableAggrandizement, WFPropertyVariableAggrandizement, WFUnitVariableAggrandizement, WFVariable, WFVariableConfigurationHeaderView, WFVariableConfigurationInfoView;

@protocol WFVariableConfigurationViewControllerDelegate;

@interface WFVariableConfigurationViewController : UIViewController

{
    _Bool _propertyListExpanded;
    _Bool _userExplicitlySelectedDefaultProperty;
    WFVariable *_variable;
    id <WFVariableConfigurationViewControllerDelegate> _delegate;
    unsigned long long _resultType;
    UITableView *_tableView;
    WFVariableConfigurationHeaderView *_headerView;
    WFVariableConfigurationInfoView *_infoView;
    NSOrderedSet *_classesForVisibleAggrandizements;
    NSArray *_properties;
    WFCoercionVariableAggrandizement *_coercionAggrandizement;
    WFPropertyVariableAggrandizement *_propertyAggrandizement;
    WFDateFormatVariableAggrandizement *_dateFormatAggrandizement;
    WFDictionaryValueVariableAggrandizement *_dictionaryValueAggrandizement;
    WFUnitVariableAggrandizement *_unitAggrandizement;
}

@property (weak, nonatomic) UITableView *tableView;
@property (weak, nonatomic) WFVariableConfigurationHeaderView *headerView;
@property (weak, nonatomic) WFVariableConfigurationInfoView *infoView;
@property (retain, nonatomic) NSOrderedSet *classesForVisibleAggrandizements;
@property (retain, nonatomic) NSArray *properties;
@property (nonatomic) _Bool propertyListExpanded;
@property (nonatomic) _Bool userExplicitlySelectedDefaultProperty;
@property (retain, nonatomic) WFCoercionVariableAggrandizement *coercionAggrandizement;
@property (retain, nonatomic) WFPropertyVariableAggrandizement *propertyAggrandizement;
@property (retain, nonatomic) WFDateFormatVariableAggrandizement *dateFormatAggrandizement;
@property (retain, nonatomic) WFDictionaryValueVariableAggrandizement *dictionaryValueAggrandizement;
@property (retain, nonatomic) WFUnitVariableAggrandizement *unitAggrandizement;
@property (nonatomic, readonly) WFVariable *variable;
@property (weak, nonatomic) id <WFVariableConfigurationViewControllerDelegate> delegate;
@property (nonatomic) unsigned long long resultType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultPropertyForContentClass:(Class)arg1 resultType:(unsigned long long)arg2;
+ (_Bool)shouldShowOnInsertionOfVariable:(id)arg1;

- (void)dealloc;
- (id)initWithVariable:(id)arg1;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)variableDidChange:(id)arg1;
- (void)variableContentClassesDidChange;
- (void)availableVariablesDidChange;
- (void)optionsViewController:(id)arg1 didSelectOption:(id)arg2;
- (void)headerViewTypeTapped:(id)arg1;
- (struct CGRect)frameForConfigurationCell:(id)arg1 withProposedFrame:(struct CGRect)arg2;
- (_Bool)variableSupportsCoercionAggrandizement;
- (Class)postCoercionContentClass;
- (void)updateHeaderView;
- (void)updateVisibleAggrandizements;
- (_Bool)hasMeasurementUnit;
- (id)currentPropertyMeasurementUnitType;
- (void)generateUpdatedVariable;

@end
