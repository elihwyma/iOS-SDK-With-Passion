/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUViewController.h>

@class NSBundle, NSString, UIImage;

@interface SULockoutViewController : SUViewController

{
    UIImage *_image;
    NSBundle *_localizationBundle;
    NSString *_messageBody;
    NSString *_messageTitle;
}

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *messageBody;
@property (retain, nonatomic) NSString *messageTitle;
@property (retain, nonatomic) NSBundle *localizationBundle;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (id)copyArchivableContext;

@end
