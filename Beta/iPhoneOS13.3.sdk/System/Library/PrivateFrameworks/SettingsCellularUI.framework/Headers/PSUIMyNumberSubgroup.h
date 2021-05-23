/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, PSListController, PSSpecifier;

__attribute__((visibility("hidden")))
@interface PSUIMyNumberSubgroup : NSObject

{
    PSListController *_listController;
    PSSpecifier *_parentSpecifier;
    NSMutableArray *_bundleControllers;
}

@property (weak, nonatomic) PSListController *listController;
@property (weak, nonatomic) PSSpecifier *parentSpecifier;
@property (retain, nonatomic) NSMutableArray *bundleControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)specifiers;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 parentSpecifier:(id)arg3;

@end
