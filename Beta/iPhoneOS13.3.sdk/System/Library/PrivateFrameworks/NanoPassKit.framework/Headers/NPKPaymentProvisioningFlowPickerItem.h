/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface NPKPaymentProvisioningFlowPickerItem : NSObject

{
    NSString *_title;
    NSArray *_products;
    NSString *_identifier;
}

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *products;
@property (nonatomic, readonly) NSString *identifier;

+ (id)itemWithIdentifier:(id)arg1 title:(id)arg2 products:(id)arg3;
+ (id)itemWithIdentifier:(id)arg1 products:(id)arg2;

- (id)description;

@end
