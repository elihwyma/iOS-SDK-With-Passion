/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class NSString, PSListController, PSSpecifier;

__attribute__((visibility("hidden")))
@interface PSUICellularDataPlanListGroup : NSObject

{
    PSSpecifier *_groupSpecifier;
    PSListController *_listController;
}

@property (weak, nonatomic) PSListController *listController;
@property (weak, nonatomic) PSSpecifier *groupSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)specifiers;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (void)addNewPlanPressed:(id)arg1;
- (void)selectPlanWithSpecifier:(id)arg1;
- (void)listController:(id)arg1 didSelectSpecifier:(id)arg2;

@end
