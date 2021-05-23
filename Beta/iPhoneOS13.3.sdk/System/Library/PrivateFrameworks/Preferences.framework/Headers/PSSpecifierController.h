/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, PSSpecifier, UIViewController;

@protocol PSSpecifierControllerDelegate;

@interface PSSpecifierController : NSObject

{
    UIViewController<PSSpecifierControllerDelegate> *_viewController;
    PSSpecifier *_specifier;
    NSMutableArray *_specifiers;
    NSMutableArray *_bundleControllers;
    NSMutableArray *_groups;
}

@property (retain, nonatomic) NSMutableArray *specifiers;
@property (retain, nonatomic) NSMutableArray *bundleControllers;
@property (retain, nonatomic) NSMutableArray *groups;
@property (weak, nonatomic) UIViewController<PSSpecifierControllerDelegate> *viewController;
@property (retain, nonatomic) PSSpecifier *specifier;

- (id)init;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)numberOfSections;
- (long long)numberOfRowsInSection:(long long)arg1;
- (void)reloadSpecifiers;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (id)readPreferenceValue:(id)arg1;
- (long long)indexForIndexPath:(id)arg1;
- (id)specifierAtIndex:(long long)arg1;
- (_Bool)getGroup:(long long *)arg1 row:(long long *)arg2 ofSpecifier:(id)arg3;
- (long long)indexOfGroup:(long long)arg1;
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2 bundle:(id)arg3;
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2;
- (void)prepareSpecifiersMetadata;
- (_Bool)getGroup:(long long *)arg1 row:(long long *)arg2 ofSpecifierAtIndex:(long long)arg3;
- (void)createGroupIndices;
- (id)specifierForID:(id)arg1;
- (_Bool)_getGroup:(long long *)arg1 row:(long long *)arg2 ofSpecifierAtIndex:(long long)arg3 groups:(id)arg4;
- (id)_createGroupIndices:(id)arg1;
- (id)specifierAtIndexPath:(id)arg1;
- (_Bool)getGroup:(long long *)arg1 row:(long long *)arg2 ofSpecifierID:(id)arg3;
- (id)loadSpecifiers;

@end
