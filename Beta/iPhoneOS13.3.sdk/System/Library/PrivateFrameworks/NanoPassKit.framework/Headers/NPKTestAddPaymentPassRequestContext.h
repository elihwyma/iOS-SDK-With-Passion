/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NPKTestAddPaymentPassRequestContext : NSObject

{
    NSString *_cardPNO;
    NSString *_cardFlow;
    NSString *_cardID;
    NSString *_cardType;
    NSString *_cardIssuer;
    NSString *_cardProduct;
    NSString *_cardEncryptionScheme;
}

@property (retain, nonatomic) NSString *cardPNO;
@property (retain, nonatomic) NSString *cardFlow;
@property (retain, nonatomic) NSString *cardID;
@property (retain, nonatomic) NSString *cardType;
@property (retain, nonatomic) NSString *cardIssuer;
@property (retain, nonatomic) NSString *cardProduct;
@property (retain, nonatomic) NSString *cardEncryptionScheme;

@end
