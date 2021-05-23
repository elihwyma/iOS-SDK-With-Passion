/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSUUID;

@interface NEPolicyResult : NSObject

{
    unsigned int _skipOrder;
    unsigned int _controlUnit;
    unsigned int _serviceData;
    long long _resultType;
    long long _secondaryResultType;
    NSString *_interfaceName;
    NSUUID *_agentUUID;
    NSUUID *_serviceUUID;
    NSArray *_routeRules;
}

@property long long resultType;
@property long long secondaryResultType;
@property unsigned int skipOrder;
@property unsigned int controlUnit;
@property (copy) NSString *interfaceName;
@property (copy) NSUUID *agentUUID;
@property (copy) NSUUID *serviceUUID;
@property unsigned int serviceData;
@property (copy) NSArray *routeRules;

+ (id)drop;
+ (id)pass;
+ (id)divertSocketToControlUnit:(unsigned int)arg1;
+ (id)allowUnentitled;
+ (id)skipWithOrder:(unsigned int)arg1;
+ (id)tunnelIPToInterfaceName:(id)arg1 secondaryResultType:(long long)arg2;
+ (id)scopeSocketToInterfaceName:(id)arg1;
+ (id)filterWithControlUnit:(unsigned int)arg1;
+ (id)prohibitFilters;
+ (id)triggerScopedService:(id)arg1 data:(unsigned int)arg2;
+ (id)routeRules:(id)arg1;
+ (id)netAgentUUID:(id)arg1;
+ (id)scopedNetworkAgent:(id)arg1;
+ (id)scopeToDirectInterface;

- (id)init;
- (id)description;
- (_Bool)validate;
- (id)initInternal;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)addTLVsToMessage:(id)arg1;
- (id)resultTypeString;
- (id)secondaryResultTypeString;
- (unsigned char)resultTypeValue;
- (unsigned char)secondaryResultTypeValue;

@end
