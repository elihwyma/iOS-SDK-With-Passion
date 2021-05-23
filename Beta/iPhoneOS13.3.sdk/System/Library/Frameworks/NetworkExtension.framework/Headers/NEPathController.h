/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface NEPathController : NSObject

{
    _Bool _enabled;
    long long _cellularFallbackFlags;
    NSArray *_pathRules;
    NSArray *_payloadAppRules;
}

@property (copy) NSArray *payloadAppRules;
@property (getter=isEnabled) _Bool enabled;
@property long long cellularFallbackFlags;
@property (copy) NSArray *pathRules;
@property (nonatomic, readonly) _Bool hasNonDefaultRules;

+ (_Bool)supportsSecureCoding;
+ (id)copyAggregatePathRules;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)copyPathRuleBySigningIdentifier:(id)arg1;
- (_Bool)removePathRuleBySigningIdentifier:(id)arg1;
- (id)copyPathRuleSigningIdentifiers;

@end
