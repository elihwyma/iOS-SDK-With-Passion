/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class NSError;

@interface SGXPCResponse : NSObject

{
    NSError *_error;
}

@property (nonatomic, readonly) NSError *error;

+ (_Bool)supportsSecureCoding;
+ (id)response;
+ (id)responseWithError:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;

@end
