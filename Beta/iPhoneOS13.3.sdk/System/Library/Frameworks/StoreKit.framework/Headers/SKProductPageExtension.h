/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <UIKit/UIViewController.h>

@class NSString;

@interface SKProductPageExtension : UIViewController

{
    _Bool _showsStoreButton;
    _Bool _showsRightBarButton;
    _Bool _askToBuy;
    NSString *_cancelButtonTitle;
    NSString *_rightBarButtonTitle;
    NSString *_promptString;
}

@property (nonatomic) _Bool showsStoreButton;
@property (copy, nonatomic) NSString *cancelButtonTitle;
@property (copy, nonatomic) NSString *rightBarButtonTitle;
@property (nonatomic) _Bool showsRightBarButton;
@property (copy, nonatomic) NSString *promptString;
@property (nonatomic) _Bool askToBuy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
+ (id)clientInterface;
+ (id)serviceInterface;

- (void)loadDidFinish;
- (void)setPreview:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)setVisibleInClientWindow:(id)arg1;
- (void)finishWithResult:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_createNavigationItem;
- (void)setupWithCustomNavigationItem:(id)arg1 promptString:(id)arg2 askToBuy:(_Bool)arg3;
- (_Bool)productPageItemDidLoad:(id)arg1 parameters:(id)arg2;
- (_Bool)lookupItemDidLoad:(id)arg1 parameters:(id)arg2;
- (void)setupWithClientBundleID:(id)arg1 bagType:(long long)arg2;
- (void)clientLookupItemDidLoad:(id)arg1 parameters:(id)arg2;
- (void)rightBarButtonPressed:(id)arg1;
- (void)storeButtonPressed:(id)arg1;
- (void)setupWithClientBundleID:(id)arg1;

@end
