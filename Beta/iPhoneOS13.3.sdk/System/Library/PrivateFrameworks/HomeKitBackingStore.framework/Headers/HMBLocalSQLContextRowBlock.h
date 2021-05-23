/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class NSData;

@interface HMBLocalSQLContextRowBlock : HMFObject

{
    unsigned long long _blockRow;
    unsigned long long _type;
    NSData *_optionsData;
}

@property (nonatomic, readonly) unsigned long long blockRow;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSData *optionsData;

- (id)initWithBlockRow:(unsigned long long)arg1 type:(unsigned long long)arg2 options:(id)arg3;

@end
