/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@protocol NSLayoutRule, _NSLayoutRuleNodeParent;

@interface _NSLayoutRuleNode : NSObject

{
    id <NSLayoutRule> _representedRule;
    id <_NSLayoutRuleNodeParent> _parentNode;
}

@property (copy) id <NSLayoutRule> representedRule;
@property id <_NSLayoutRuleNodeParent> parentNode;

- (void)dealloc;
- (id)description;
- (id)initWithRule:(id)arg1;

@end
