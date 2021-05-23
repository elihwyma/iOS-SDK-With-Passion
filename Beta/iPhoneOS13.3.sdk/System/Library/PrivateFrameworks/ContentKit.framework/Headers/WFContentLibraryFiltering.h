/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@interface WFContentLibraryFiltering : NSObject

+ (Class)objectClass;
+ (void)getItemsMatchingPredicate:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)performCustomFilteringUsingORComparisonPredicates:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)getItemsMatchingComparisonPredicates:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)performCustomFilteringUsingComparisonPredicates:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;

@end
