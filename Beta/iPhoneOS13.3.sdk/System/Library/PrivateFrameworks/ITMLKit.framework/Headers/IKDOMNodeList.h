/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSObject.h>

@class IKDOMNode, NSArray, NSString;

@interface IKDOMNodeList : IKJSObject

{
    IKDOMNode *_contextNode;
    CDUnknownBlockType _evaluationBlock;
    NSArray *_nodes;
}

@property (retain, nonatomic) IKDOMNode *contextNode;
@property (copy, nonatomic, readonly) CDUnknownBlockType evaluationBlock;
@property (copy, nonatomic) NSArray *nodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long length;

+ (id)nodeListWithAppContext:(id)arg1 contextNode:(id)arg2 xpath:(id)arg3;

- (id)item:(long long)arg1;
- (id)initWithAppContext:(id)arg1 contextNode:(id)arg2 evaluationBlock:(CDUnknownBlockType)arg3;
- (void)_updateNodes;
- (void)domDidUpdateForContextNode:(id)arg1;

@end
