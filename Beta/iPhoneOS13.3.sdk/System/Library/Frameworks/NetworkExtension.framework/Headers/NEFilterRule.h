/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NENetworkRule;

@interface NEFilterRule : NSObject

{
    NENetworkRule *_networkRule;
    long long _action;
}

@property (copy, readonly) NENetworkRule *networkRule;
@property (readonly) long long action;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)initWithNetworkRule:(id)arg1 action:(long long)arg2;

@end
