/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData, NSString;

@interface PKDisbursementApplicationInformation : NSObject <Swift>

{
    NSString *_vendorName;
    NSString *_itemName;
    NSData *_iconData;
}

@property (copy, nonatomic) NSString *vendorName;
@property (copy, nonatomic) NSString *itemName;
@property (copy, nonatomic) NSData *iconData;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVendorName:(id)arg1 itemName:(id)arg2 iconData:(id)arg3;

@end
