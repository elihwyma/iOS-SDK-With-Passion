/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NFUnfairLock, NSArray, NSMutableArray;

@interface FCThreadSafeMutableArray : NSObject

{
    NFUnfairLock *_lock;
    NSMutableArray *_array;
}

@property (copy, nonatomic, readonly) NSArray *readOnlyArray;

- (id)init;
- (void)addObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;

@end
