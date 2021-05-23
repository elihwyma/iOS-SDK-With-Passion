/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class CTUIListLoadingGroup, NSArray, NSString, PSListController, PSSpecifier;

@interface PSUIAppDataUsageGroup : NSObject

{
    NSArray *_specifiers;
    PSListController *_hostController;
    PSSpecifier *_groupSpecifier;
    CTUIListLoadingGroup *_loadingGroup;
}

@property (weak, nonatomic) PSListController *hostController;
@property (weak, nonatomic) PSSpecifier *groupSpecifier;
@property (retain, nonatomic) CTUIListLoadingGroup *loadingGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)specifiers;
- (void)prefetchResourcesFor:(id)arg1;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (void)presentAlert:(id)arg1;
- (void)didFailToSetPolicy:(id)arg1 forSpecifier:(id)arg2;
- (void)calculateUsage;

@end
