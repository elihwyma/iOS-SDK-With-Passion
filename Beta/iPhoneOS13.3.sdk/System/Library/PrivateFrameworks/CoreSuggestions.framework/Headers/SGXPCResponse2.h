/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <CoreSuggestions/SGXPCResponse1.h>

@protocol NSSecureCoding;

@interface SGXPCResponse2 : SGXPCResponse1

{
    id <NSSecureCoding> _response2;
}

@property (nonatomic, readonly) id <NSSecureCoding> response2;

+ (_Bool)supportsSecureCoding;
+ (id)responseWithError:(id)arg1;
+ (id)responseWith:(id)arg1 also:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)response1;
- (void)setResponse2:(id)arg1;

@end
