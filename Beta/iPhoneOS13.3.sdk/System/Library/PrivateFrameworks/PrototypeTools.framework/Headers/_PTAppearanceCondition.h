/*
 Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import <Foundation/NSObject.h>

@class NSPredicate, NSString;

@interface _PTAppearanceCondition : NSObject

{
    NSString *_conditionKeyPath;
    NSPredicate *_conditionPredicate;
}

@property (retain, nonatomic) NSString *conditionKeyPath;
@property (retain, nonatomic) NSPredicate *conditionPredicate;

+ (id)appearanceConditionWithPredicate:(id)arg1;

- (void)addKeyPathPrefix:(id)arg1;
- (_Bool)evaluateWithSettings:(id)arg1;

@end
