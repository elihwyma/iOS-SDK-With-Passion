/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface PKCloudStoreRecord : NSObject

{
    NSMutableDictionary *_records;
    NSDictionary *_cloudStoreSpecificKeys;
}

@property (copy, nonatomic) NSDictionary *cloudStoreSpecificKeys;
@property (nonatomic, readonly) NSArray *records;

- (id)description;
- (void)addRecord:(id)arg1;
- (id)recordsWithRecordType:(id)arg1;
- (id)initWithRecords:(id)arg1;

@end
