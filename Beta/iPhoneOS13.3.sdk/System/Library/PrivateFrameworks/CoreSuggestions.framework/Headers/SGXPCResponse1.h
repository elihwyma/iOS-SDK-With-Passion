/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <CoreSuggestions/SGXPCResponse.h>

@protocol NSSecureCoding;

@interface SGXPCResponse1 : SGXPCResponse

{
    id <NSSecureCoding> _response1;
}

@property (nonatomic, readonly) id <NSSecureCoding> response1;

+ (_Bool)supportsSecureCoding;
+ (id)responseWithError:(id)arg1;
+ (id)responseWith:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setResponse1:(id)arg1;

@end
