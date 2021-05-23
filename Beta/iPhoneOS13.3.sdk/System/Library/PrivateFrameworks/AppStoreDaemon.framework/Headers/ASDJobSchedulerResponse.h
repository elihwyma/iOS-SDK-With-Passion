/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDRequestResponse.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSArray;

@interface ASDJobSchedulerResponse : ASDRequestResponse <Swift>

{
    NSArray *_bucketNames;
    NSArray *_currentItems;
    NSArray *_hardFailureItems;
    long long _maxItemCount;
    NSArray *_nextItems;
    NSArray *_skippedItems;
    NSArray *_softFailureItems;
}

@property (copy) NSArray *bucketNames;
@property (readonly) NSArray *currentItems;
@property (copy) NSArray *hardFailureItems;
@property (nonatomic) long long maxItemCount;
@property (copy) NSArray *nextItems;
@property (copy) NSArray *skippedItems;
@property (copy) NSArray *softFailureItems;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItems:(id)arg1;

@end
