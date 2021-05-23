/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString;

@interface PKLabeledValue : NSObject <Swift>

{
    NSString *_label;
    NSString *_value;
}

@property (copy, nonatomic, readonly) NSString *label;
@property (copy, nonatomic, readonly) NSString *value;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1 value:(id)arg2;

@end
