/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/SearchUIAccessoryViewController.h>

@class CNContactInlineActionsViewController, NSData, NSString, NSURL, UIView;

@interface SearchUIInlineActionsViewController : SearchUIAccessoryViewController

{
    CNContactInlineActionsViewController *_inlineActionsViewController;
    UIView *_messageButton;
    NSURL *_messageURL;
    UIView *_directionsButton;
    NSData *_mapsData;
    NSString *_name;
    double _latitude;
    double _longitude;
}

@property (retain, nonatomic) CNContactInlineActionsViewController *inlineActionsViewController;
@property (retain, nonatomic) UIView *messageButton;
@property (retain, nonatomic) NSURL *messageURL;
@property (retain, nonatomic) UIView *directionsButton;
@property (retain, nonatomic) NSData *mapsData;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsRowModel:(id)arg1;
+ (id)directionsButtonImage;

- (unsigned long long)type;
- (void)updateWithContacts:(id)arg1;
- (void)contactInlineActionsViewController:(id)arg1 willPerformActionOfType:(id)arg2;
- (id)hostingViewControllerForController:(id)arg1;
- (void)didPressActionView:(id)arg1 longPress:(_Bool)arg2;
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (id)setupView;
- (void)updateWithRowModel:(id)arg1;

@end
