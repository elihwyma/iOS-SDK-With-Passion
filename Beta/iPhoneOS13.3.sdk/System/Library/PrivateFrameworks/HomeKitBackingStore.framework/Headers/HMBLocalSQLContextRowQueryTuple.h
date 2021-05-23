/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class NSData;

@interface HMBLocalSQLContextRowQueryTuple : HMFObject

{
    unsigned long long _queryRow;
    NSData *_queryData;
}

@property (nonatomic, readonly) unsigned long long queryRow;
@property (nonatomic, readonly) NSData *queryData;

- (id)initWithQueryRow:(unsigned long long)arg1 data:(id)arg2;

@end
