/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface RKCurrencyAmount : NSObject

{
    NSString *_string;
    NSString *_currency;
    double _value;
}

@property (readonly) NSString *string;
@property (readonly) NSString *currency;
@property (readonly) double value;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 currency:(id)arg2 value:(double)arg3;

@end
