/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class NSArray;

@interface HMBLocalSQLContextQueryIndex : HMFObject

{
    NSArray *_columns;
}

@property (nonatomic, readonly) NSArray *columns;

- (id)description;
- (id)initWithColumns:(id)arg1;

@end
