/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _OSLogStreamFilter : NSObject

{
    NSMutableDictionary *_filter;
    NSMutableDictionary *_pids;
    NSMutableDictionary *_processes;
    NSMutableDictionary *_processImagePaths;
    NSMutableDictionary *_subsystems;
    NSMutableDictionary *_categories;
}

@property (nonatomic, readonly) NSData *data;

- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;
- (id)initWithPredicate:(id)arg1;
- (void)processComparisonPredicate:(id)arg1;
- (void)addProcessID:(id)arg1 flags:(unsigned long long)arg2;
- (void)addProcess:(id)arg1 flags:(unsigned long long)arg2;
- (void)addProcessImagePath:(id)arg1 flags:(unsigned long long)arg2;
- (void)addSubsystem:(id)arg1 flags:(unsigned long long)arg2;
- (void)addCategory:(id)arg1 flags:(unsigned long long)arg2;
- (void)processLeftExpression:(id)arg1 andRightExpression:(id)arg2 flags:(unsigned long long)arg3;
- (unsigned long long)flagsForPredicate:(id)arg1;

@end
