/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class NSDictionary, NSMutableDictionary, NSSet;

@interface HMBLocalSQLContextQueryTable : HMFObject

{
    NSSet *_columnNames;
    NSMutableDictionary *_mutableIndexes;
}

@property (nonatomic, readonly) NSMutableDictionary *mutableIndexes;
@property (nonatomic, readonly) NSSet *columnNames;
@property (nonatomic, readonly) NSDictionary *indexes;

- (id)description;
- (id)initWithColumnNames:(id)arg1;

@end
