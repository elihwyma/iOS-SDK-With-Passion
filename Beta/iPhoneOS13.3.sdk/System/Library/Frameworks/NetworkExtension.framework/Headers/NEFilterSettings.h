/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface NEFilterSettings : NSObject

{
    NSArray *_rules;
    long long _defaultAction;
}

@property (copy, readonly) NSArray *rules;
@property (readonly) long long defaultAction;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)initWithRules:(id)arg1 defaultAction:(long long)arg2;

@end
