/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/_NSLayoutRuleNode.h>

@class NSLayoutConstraint;

@interface _NSConstraintDescriptionLayoutRuleNode : _NSLayoutRuleNode

{
    NSLayoutConstraint *_ownedConstraint;
}

@property (retain) NSLayoutConstraint *ownedConstraint;

- (void)dealloc;

@end
