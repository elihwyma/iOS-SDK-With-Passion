/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface PKBarcode : NSObject <Swift>

{
    NSData *_messageData;
    NSDictionary *_options;
    long long _format;
    NSString *_altText;
}

@property (copy, nonatomic) NSData *messageData;
@property (copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) NSString *altText;
@property (nonatomic) long long format;
@property (nonatomic, readonly) _Bool isTall;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPassDictionary:(id)arg1 bundle:(id)arg2;

@end
