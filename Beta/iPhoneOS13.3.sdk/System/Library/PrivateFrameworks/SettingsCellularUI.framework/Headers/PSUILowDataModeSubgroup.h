/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class NSString, PSListController, PSSpecifier;

__attribute__((visibility("hidden")))
@interface PSUILowDataModeSubgroup : NSObject

{
    PSListController *_hostController;
    PSSpecifier *_parentSpecifier;
}

@property (weak, nonatomic) PSListController *hostController;
@property (weak, nonatomic) PSSpecifier *parentSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)specifiers;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2;

@end
