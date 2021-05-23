/*
 Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, UIViewController;

@interface CDPRemoteValidationEscapeOffer : NSObject

{
    NSMutableArray *_escapeOptions;
    UIViewController *_presentingViewController;
    NSString *_escapeOfferName;
    NSString *_title;
    NSString *_message;
}

@property (weak, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) NSString *escapeOfferName;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;

- (id)init;
- (void)handleEscapeAction:(id)arg1;
- (void)addEscapeOptionsObject:(id)arg1;
- (id)escapeOptions;
- (id)_actionFromEscapeOption:(id)arg1;
- (long long)_styleForEscapeOption:(id)arg1;
- (void)dismissOfferAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;

@end
