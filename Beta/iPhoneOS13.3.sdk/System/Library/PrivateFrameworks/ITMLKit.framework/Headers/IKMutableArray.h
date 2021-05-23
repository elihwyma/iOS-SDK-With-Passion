/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKArray.h>

@interface IKMutableArray : IKArray

{
    long long _expectedCapacity;
}

@property (nonatomic, readonly) long long expectedCapacity;

- (id)initWithCapacity:(long long)arg1;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(long long)arg2;
- (void)removeObjectAtIndex:(long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(long long)arg2;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)_convertToArrayStore;

@end
