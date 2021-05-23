/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class NSArray, PSListController, PSSpecifier;

__attribute__((visibility("hidden")))
@interface CTUIListWithHeaderLoadingGroup : NSObject

{
    PSListController *_hostController;
    NSArray *_headerSpecifiers;
    NSArray *_contentSpecifiers;
    PSSpecifier *_spinnerSpecifier;
}

@property (weak, nonatomic) PSListController *hostController;
@property (retain, nonatomic) NSArray *headerSpecifiers;
@property (retain, nonatomic) NSArray *contentSpecifiers;
@property (retain, nonatomic) PSSpecifier *spinnerSpecifier;

- (id)specifiers;
- (id)initWithHostController:(id)arg1;

@end
