/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSNumber, NSString;

@interface TIUserModelIndexedCounter : NSObject

{
    NSMutableArray *_persisted;
    NSMutableArray *_current;
    NSString *_name;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) int bucketCount;
@property (nonatomic, readonly) NSArray *counts;
@property (nonatomic, readonly) NSArray *currentCounts;
@property (nonatomic, readonly) NSNumber *count;

- (id)initWithName:(id)arg1;
- (void)setupBuckets;
- (void)doPersist:(id)arg1 forDate:(id)arg2 forInputMode:(id)arg3 forContext:(id)arg4;
- (void)update:(int)arg1 forIndex:(int)arg2;
- (void)updateWithNumber:(id)arg1 forIndex:(int)arg2;
- (void)updateWithLoadedValue:(int)arg1 forIndex:(int)arg2;
- (void)updateWithLoadedNumber:(id)arg1 forIndex:(int)arg2;

@end
