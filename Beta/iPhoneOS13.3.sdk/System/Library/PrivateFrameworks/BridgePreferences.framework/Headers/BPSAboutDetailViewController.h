/*
 Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

#import <OnBoardingKit/OBTextWelcomeController.h>

@class NSArray, NSString, UIImage;

@interface BPSAboutDetailViewController : OBTextWelcomeController

{
    NSString *_headerString;
    NSString *_footerString;
    NSArray *_bullets;
    NSArray *_paragraphs;
    NSString *_titleString;
    UIImage *_headerGlyph;
    CDUnknownBlockType _onDismiss;
}

@property (copy, nonatomic) CDUnknownBlockType onDismiss;
@property (retain, nonatomic) NSString *headerString;
@property (retain, nonatomic) NSString *footerString;
@property (retain, nonatomic) NSArray *bullets;
@property (retain, nonatomic) NSArray *paragraphs;
@property (retain, nonatomic) NSString *titleString;
@property (retain, nonatomic) UIImage *headerGlyph;

- (id)init;
- (void)viewDidLoad;
- (void)donePressed;
- (void)presentWithController:(id)arg1 onDismiss:(CDUnknownBlockType)arg2;
- (_Bool)contentViewIsInAdjustedScrollView;
- (void)presentWithController:(id)arg1;

@end
