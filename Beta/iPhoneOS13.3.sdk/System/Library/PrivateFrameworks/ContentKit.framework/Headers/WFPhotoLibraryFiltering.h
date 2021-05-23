/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WFPhotoLibraryFiltering : NSObject

+ (void)performCustomFilteringUsingContentPredicates:(id)arg1 compoundPredicateType:(unsigned long long)arg2 forQuery:(id)arg3 withInput:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
+ (void)performFallbackFilteringWithItems:(id)arg1 withContentPredicates:(id)arg2 compoundPredicateType:(unsigned long long)arg3 originalQuery:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
+ (void)getItemsMatchingQuery:(id)arg1 withInput:(id)arg2 compoundPredicate:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;
+ (void)getItemsMatchingQuery:(id)arg1 withInput:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;

@end
