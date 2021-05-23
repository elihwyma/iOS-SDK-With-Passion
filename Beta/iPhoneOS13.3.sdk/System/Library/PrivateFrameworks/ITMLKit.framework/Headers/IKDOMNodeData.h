/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKDOMNode, NSMutableDictionary;

@interface IKDOMNodeData : NSObject

{
    _Bool _updated;
    _Bool _childrenUpdated;
    _Bool _subtreeUpdated;
    _Bool _autoHighlightRead;
    _Bool _bindingParsed;
    _Bool _rulesParsed;
    _Bool _prototypesResolved;
    _Bool _dataResolved;
    IKDOMNode *_ownerJSNode;
    NSMutableDictionary *_featuresMap;
}

@property (retain, nonatomic) NSMutableDictionary *featuresMap;
@property (weak, nonatomic) IKDOMNode *ownerJSNode;
@property (nonatomic, readonly) _Bool containsUpdates;
@property (nonatomic, getter=isUpdated) _Bool updated;
@property (nonatomic, getter=isChildrenUpdated) _Bool childrenUpdated;
@property (nonatomic, getter=isSubtreeUpdated) _Bool subtreeUpdated;
@property (nonatomic, getter=isAutoHighlightRead) _Bool autoHighlightRead;
@property (nonatomic, getter=isBindingParsed) _Bool bindingParsed;
@property (nonatomic, getter=areRulesParsed) _Bool rulesParsed;
@property (nonatomic, getter=arePrototypesResolved) _Bool prototypesResolved;
@property (nonatomic, getter=isDataResolved) _Bool dataResolved;

+ (void)initialize;
+ (id)jsNodeDataForNode:(struct _xmlNode *)arg1 create:(_Bool)arg2;

- (void)setFeature:(id)arg1 forName:(id)arg2;
- (id)featureForName:(id)arg1;

@end
