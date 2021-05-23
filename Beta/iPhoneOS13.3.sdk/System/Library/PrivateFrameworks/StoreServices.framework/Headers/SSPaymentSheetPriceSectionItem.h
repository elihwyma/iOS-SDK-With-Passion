/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString;

@interface SSPaymentSheetPriceSectionItem : NSObject

{
    NSString *_label;
    NSString *_price;
}

@property (copy) NSString *label;
@property (copy) NSString *price;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)_parseDictionary:(id)arg1 withCaseControl:(_Bool)arg2;

@end
