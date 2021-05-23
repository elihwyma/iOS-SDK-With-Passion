/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class _CDInteractionStore;

@interface _CDQueryInteractionAdvisor : NSObject

{
    _CDInteractionStore *_store;
}

@property (retain) _CDInteractionStore *store;

- (id)initWithStore:(id)arg1;
- (id)adviseInteractionsForKeywordsInString:(id)arg1 usingSettings:(id)arg2;

@end
