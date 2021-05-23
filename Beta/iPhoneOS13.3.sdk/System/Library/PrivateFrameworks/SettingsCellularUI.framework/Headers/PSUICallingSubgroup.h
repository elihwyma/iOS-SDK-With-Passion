/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, PSListController, PSSpecifier;

__attribute__((visibility("hidden")))
@interface PSUICallingSubgroup : NSObject

{
    _Bool _supportsWiFiCalling;
    PSListController *_listController;
    PSSpecifier *_parentSpecifier;
    NSArray *_wifiCallingSpecifiers;
}

@property (weak, nonatomic) PSListController *listController;
@property (weak, nonatomic) PSSpecifier *parentSpecifier;
@property (retain, nonatomic) NSArray *wifiCallingSpecifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)specifiers;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 parentSpecifier:(id)arg3;
- (void)viewWillAppear;

@end
