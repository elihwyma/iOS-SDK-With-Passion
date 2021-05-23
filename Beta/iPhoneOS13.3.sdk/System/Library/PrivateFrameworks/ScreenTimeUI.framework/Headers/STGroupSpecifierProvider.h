/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, PSSpecifier, UIViewController;

@protocol STGroupSpecifierProviderDelegate;

__attribute__((visibility("hidden")))
@interface STGroupSpecifierProvider : NSObject

{
    _Bool _isHidden;
    _Bool _invalid;
    UIViewController<STGroupSpecifierProviderDelegate> *_delegate;
    PSSpecifier *_groupSpecifier;
    NSMutableArray *_privateSpecifiers;
}

@property (retain) NSMutableArray *privateSpecifiers;
@property _Bool invalid;
@property (weak, nonatomic) UIViewController<STGroupSpecifierProviderDelegate> *delegate;
@property (nonatomic) _Bool isHidden;
@property (retain, nonatomic) PSSpecifier *groupSpecifier;
@property (copy, nonatomic, readonly) NSArray *specifiers;
@property (readonly) NSMutableArray *mutableSpecifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)automaticallyNotifiesObserversOfIsHidden;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)beginUpdates;
- (void)endUpdates;
- (void)reloadSpecifier:(id)arg1 animated:(_Bool)arg2;
- (void)showConfirmationViewForSpecifier:(id)arg1;
- (void)lazyLoadBundle:(id)arg1;
- (void)showStoreDemoAlert;
- (void)showPINSheet:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showController:(id)arg1 animated:(_Bool)arg2;
- (void)dismissViewControllerAnimated:(_Bool)arg1;
- (void)popToViewControllerAnimated:(_Bool)arg1;
- (void)_tableCellHeightDidChange:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)reloadSectionHeaderFootersWithAnimation:(long long)arg1;
- (id)specifiersAtIndexes:(id)arg1;
- (void)insertSpecifiers:(id)arg1 atIndexes:(id)arg2;
- (void)removeSpecifiersAtIndexes:(id)arg1;
- (void)replaceObjectInSpecifiersAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)replaceSpecifiersAtIndexes:(id)arg1 withSpecifiers:(id)arg2;

@end
