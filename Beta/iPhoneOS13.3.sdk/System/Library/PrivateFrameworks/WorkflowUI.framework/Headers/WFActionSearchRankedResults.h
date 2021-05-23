/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFActionSearchRankedCollection.h>

@class NSMutableDictionary;

@interface WFActionSearchRankedResults : WFActionSearchRankedCollection

{
    NSMutableDictionary *_displayNames;
    NSMutableDictionary *_records;
}

- (id)init;
- (void)addKey:(id)arg1 withDisplayName:(id)arg2 type:(unsigned long long)arg3;
- (void)addAction:(id)arg1 forKey:(id)arg2 type:(unsigned long long)arg3;
- (id)rankedGroups;

@end
