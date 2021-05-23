/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CXTransactionGroup : NSObject

{
    NSMutableDictionary *_callSourceIdentifierToTransaction;
    NSMutableArray *_mutableCallSources;
}

@property (nonatomic, readonly) NSMutableDictionary *callSourceIdentifierToTransaction;
@property (nonatomic, readonly) NSMutableArray *mutableCallSources;
@property (nonatomic, readonly, getter=isComplete) _Bool complete;
@property (copy, nonatomic, readonly) NSArray *callSources;
@property (copy, nonatomic, readonly) NSArray *transactions;
@property (copy, nonatomic, readonly) NSArray *allActions;

- (id)init;
- (id)description;
- (void)addAction:(id)arg1 forCallSource:(id)arg2;
- (id)transactionForCallSource:(id)arg1;

@end
