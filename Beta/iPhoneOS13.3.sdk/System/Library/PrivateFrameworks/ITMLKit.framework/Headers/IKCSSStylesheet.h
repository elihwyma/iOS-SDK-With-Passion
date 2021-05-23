/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKCSSRuleList;

@interface IKCSSStylesheet : NSObject

{
    IKCSSRuleList *_ruleList;
}

@property (retain, nonatomic) IKCSSRuleList *ruleList;

- (id)description;

@end
