/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIViewController.h>

@class CNContactStore, NSArray, NSString, PRPersonaStore, UIView;

@protocol CNAvatarViewControllerDelegate, CNUIObjectViewControllerDelegate, CNUIPRLikenessResolver;

@interface CNAvatarViewController : UIViewController

{
    id <CNUIObjectViewControllerDelegate> objectViewControllerDelegate;
}

@property (nonatomic, readonly) id <CNUIPRLikenessResolver> likenessResolver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) PRPersonaStore *personaStore;
@property (nonatomic, getter=isThreeDTouchEnabled) _Bool threeDTouchEnabled;
@property (weak, nonatomic) id <CNAvatarViewControllerDelegate> delegate;
@property (nonatomic, readonly) UIView *view;
@property (weak, nonatomic) id <CNUIObjectViewControllerDelegate> objectViewControllerDelegate;
@property (copy, nonatomic) NSArray *contacts;

+ (id)descriptorForRequiredKeysWithThreeDTouchEnabled:(_Bool)arg1;
+ (Class)defaultImplementation;

- (id)initWithCoder:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)descriptorForRequiredKeys;

@end
