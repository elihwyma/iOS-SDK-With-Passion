/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolDOMAccessibilityProperties : RWIProtocolJSONObject

@property (nonatomic) _Bool exists;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) int nodeId;
@property (copy, nonatomic) NSString *role;
@property (nonatomic) int activeDescendantNodeId;
@property (nonatomic) _Bool busy;
@property (nonatomic) long long checked;
@property (copy, nonatomic) NSArray *childNodeIds;
@property (copy, nonatomic) NSArray *controlledNodeIds;
@property (nonatomic) long long current;
@property (nonatomic) _Bool disabled;
@property (nonatomic) double headingLevel;
@property (nonatomic) double hierarchyLevel;
@property (nonatomic) _Bool isPopUpButton;
@property (nonatomic) _Bool expanded;
@property (copy, nonatomic) NSArray *flowedNodeIds;
@property (nonatomic) _Bool focused;
@property (nonatomic) _Bool ignored;
@property (nonatomic) _Bool ignoredByDefault;
@property (nonatomic) long long invalid;
@property (nonatomic) _Bool hidden;
@property (nonatomic) _Bool liveRegionAtomic;
@property (copy, nonatomic) NSArray *liveRegionRelevant;
@property (nonatomic) long long liveRegionStatus;
@property (nonatomic) int mouseEventNodeId;
@property (copy, nonatomic) NSArray *ownedNodeIds;
@property (nonatomic) int parentNodeId;
@property (nonatomic) _Bool pressed;
@property (nonatomic) _Bool readonly;
@property (nonatomic) _Bool required;
@property (nonatomic) _Bool selected;
@property (copy, nonatomic) NSArray *selectedChildNodeIds;

- (id)initWithExists:(_Bool)arg1 label:(id)arg2 nodeId:(int)arg3 role:(id)arg4;

@end
