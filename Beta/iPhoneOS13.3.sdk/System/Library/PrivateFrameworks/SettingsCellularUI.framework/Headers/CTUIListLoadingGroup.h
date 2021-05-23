/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class NSArray, PSListController, PSSpecifier;

__attribute__((visibility("hidden")))
@interface CTUIListLoadingGroup : NSObject

{
    NSArray *_specifiers;
    PSListController *_hostController;
    PSSpecifier *_groupSpecifier;
    PSSpecifier *_spinnerSpecifier;
}

@property (weak, nonatomic) PSListController *hostController;
@property (weak, nonatomic) PSSpecifier *groupSpecifier;
@property (retain, nonatomic) NSArray *specifiers;
@property (retain, nonatomic) PSSpecifier *spinnerSpecifier;

- (id)initWithHostController:(id)arg1 groupSpecifier:(id)arg2;

@end
