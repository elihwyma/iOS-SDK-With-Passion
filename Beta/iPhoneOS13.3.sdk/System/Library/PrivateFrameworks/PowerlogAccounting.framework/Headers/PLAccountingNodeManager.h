/*
 Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface PLAccountingNodeManager : NSObject

{
    NSMutableDictionary *_nodeNameToNodeID;
    NSMutableDictionary *_nodeIDToNodeName;
}

@property (retain) NSMutableDictionary *nodeNameToNodeID;
@property (retain) NSMutableDictionary *nodeIDToNodeName;

+ (id)sharedInstance;

- (id)init;
- (id)nodeNameForNodeID:(id)arg1;
- (id)childNodeIDsFromChildNodeNames:(id)arg1;
- (id)nodeIDForNodeName:(id)arg1 isPermanent:(_Bool)arg2;
- (void)setupNodes;

@end
