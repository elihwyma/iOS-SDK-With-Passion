/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <CoreSuggestions/SGXPCResponse2.h>

@protocol NSSecureCoding;

@interface SGXPCResponse3 : SGXPCResponse2

{
    id <NSSecureCoding> _response3;
}

@property (nonatomic, readonly) id <NSSecureCoding> response3;

+ (_Bool)supportsSecureCoding;
+ (id)responseWithError:(id)arg1;
+ (id)responseWith:(id)arg1 also:(id)arg2 also:(id)arg3;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)response1;
- (id)response2;

@end
