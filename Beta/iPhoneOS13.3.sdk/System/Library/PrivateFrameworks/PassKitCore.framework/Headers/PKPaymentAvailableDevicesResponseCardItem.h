/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSNumber, NSString;

@interface PKPaymentAvailableDevicesResponseCardItem : NSObject

{
    _Bool _supportsInApp;
    NSString *_cardType;
    NSNumber *_cardTypeCode;
    NSString *_currentStatus;
}

@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSNumber *cardTypeCode;
@property (copy, nonatomic) NSString *currentStatus;
@property (nonatomic) _Bool supportsInApp;

- (id)initWithDictionary:(id)arg1;

@end
