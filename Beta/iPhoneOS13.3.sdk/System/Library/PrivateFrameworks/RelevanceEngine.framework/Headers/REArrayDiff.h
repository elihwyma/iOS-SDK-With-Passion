/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface REArrayDiff : NSObject

{
    NSArray *_allOperations;
}

@property (nonatomic, readonly) NSArray *allOperations;

+ (id)diffFromElements:(id)arg1 toElements:(id)arg2 equalComparator:(CDUnknownBlockType)arg3 hashGenerator:(CDUnknownBlockType)arg4 changeComparator:(CDUnknownBlockType)arg5;
+ (id)_createSetFromElementArray:(id)arg1 equalComparator:(CDUnknownBlockType)arg2 hashGenerator:(CDUnknownBlockType)arg3;
+ (id)_indexSetFromSet:(id)arg1;
+ (id)diffFromElements:(id)arg1 toElements:(id)arg2;

- (void)enumerateOperationsUsingBlock:(CDUnknownBlockType)arg1;

@end
