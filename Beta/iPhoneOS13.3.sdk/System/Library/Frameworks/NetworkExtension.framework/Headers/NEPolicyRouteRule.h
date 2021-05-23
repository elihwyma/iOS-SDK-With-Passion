/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NEPolicyRouteRule : NSObject

{
    long long _action;
    NSString *_interfaceName;
    long long _type;
}

@property long long action;
@property (copy) NSString *interfaceName;
@property long long type;

+ (id)routeRuleWithAction:(long long)arg1 forInterfaceName:(id)arg2;
+ (id)routeRuleWithAction:(long long)arg1 forType:(long long)arg2;

- (id)init;
- (id)description;
- (id)typeString;
- (_Bool)validate;
- (id)initInternal;
- (id)actionString;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)addTLVsToMessage:(id)arg1;
- (unsigned char)actionValue;
- (unsigned char)typeValue;

@end
