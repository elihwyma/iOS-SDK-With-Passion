/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface IKCSSRuleList : NSObject

{
    NSMutableArray *rules;
}

- (id)init;
- (id)description;
- (unsigned long long)count;
- (void)addRule:(id)arg1;
- (id)ruleAtIndex:(unsigned long long)arg1;
- (id)firstRule;
- (id)lastRule;

@end
