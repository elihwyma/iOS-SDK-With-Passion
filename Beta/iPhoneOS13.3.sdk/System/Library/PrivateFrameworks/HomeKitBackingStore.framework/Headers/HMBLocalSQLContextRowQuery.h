/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class NSDictionary;

@interface HMBLocalSQLContextRowQuery : HMFObject

{
    unsigned long long _recordRow;
    NSDictionary *_tuples;
}

@property (nonatomic, readonly) unsigned long long recordRow;
@property (nonatomic, readonly) NSDictionary *tuples;

- (id)initWithRecordRow:(unsigned long long)arg1 tuples:(id)arg2;

@end
