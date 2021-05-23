/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSString, PKPaymentApplication, PKPaymentPass, PKRemotePaymentInstrument;

@interface PKPaymentPreferenceCardEntry : NSObject

{
    _Bool _shouldShowCardUI;
    _Bool _isSelectable;
    PKPaymentPass *_pass;
    PKRemotePaymentInstrument *_remotePaymentInstrument;
    PKPaymentApplication *_paymentApplication;
    NSString *_displayName;
    NSString *_availabilityString;
    CDUnknownBlockType _actionBlock;
}

@property (retain, nonatomic) PKPaymentPass *pass;
@property (retain, nonatomic) PKRemotePaymentInstrument *remotePaymentInstrument;
@property (retain, nonatomic) PKPaymentApplication *paymentApplication;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *availabilityString;
@property (nonatomic) _Bool shouldShowCardUI;
@property (nonatomic) _Bool isSelectable;
@property (copy, nonatomic) CDUnknownBlockType actionBlock;

@end
