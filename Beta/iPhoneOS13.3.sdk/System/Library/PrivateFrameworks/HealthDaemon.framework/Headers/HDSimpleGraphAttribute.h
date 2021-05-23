/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSimpleGraphObject.h>

@class HDSimpleGraphNode, NSString;

@interface HDSimpleGraphAttribute : HDSimpleGraphObject

{
    NSString *_key;
    NSString *_value;
    NSString *_valueType;
    long long _nodeID;
    HDSimpleGraphNode *_node;
}

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *valueType;
@property (nonatomic) long long nodeID;
@property (weak, nonatomic) HDSimpleGraphNode *node;

- (id)init;
- (id)description;
- (id)initWithDatabase:(id)arg1 rowID:(long long)arg2 key:(id)arg3 value:(id)arg4 valueType:(id)arg5 nodeID:(long long)arg6 node:(id)arg7;

@end
