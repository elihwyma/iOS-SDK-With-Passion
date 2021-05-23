/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _IKDOMPrototypeDerivationRules : NSObject

{
    NSArray *_mutationRules;
    NSArray *_indexPath;
}

@property (copy, nonatomic, readonly) NSArray *mutationRules;
@property (copy, nonatomic, readonly) NSArray *indexPath;

+ (id)derivationRulesForDOMElement:(id)arg1;
+ (void)removeRulesFromDOMElement:(id)arg1;

- (id)initWithIndexPath:(id)arg1 mutationRules:(id)arg2;

@end
