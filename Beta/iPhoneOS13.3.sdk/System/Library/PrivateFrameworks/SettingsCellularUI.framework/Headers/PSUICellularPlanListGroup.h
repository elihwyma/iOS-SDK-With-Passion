/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PSUICellularPlanListGroup : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)specifiers;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)planSpecifierDetailText:(id)arg1;
- (id)danglingPlanSpecifierDetailText:(id)arg1;
- (void)danglingPlanPressed:(id)arg1;
- (id)planPendingTransferSpecifierDetailText:(id)arg1;

@end
