//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

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

@property(nonatomic) __weak HDSimpleGraphNode *node; // @synthesize node=_node;
@property(nonatomic) long long nodeID; // @synthesize nodeID=_nodeID;
@property(copy, nonatomic) NSString *valueType; // @synthesize valueType=_valueType;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithDatabase:(id)arg1 rowID:(long long)arg2 key:(id)arg3 value:(id)arg4 valueType:(id)arg5 nodeID:(long long)arg6 node:(id)arg7;
- (id)init;

@end

