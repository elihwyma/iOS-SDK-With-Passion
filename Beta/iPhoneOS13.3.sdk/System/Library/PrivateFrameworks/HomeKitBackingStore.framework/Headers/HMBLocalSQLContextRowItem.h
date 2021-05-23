/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface HMBLocalSQLContextRowItem : HMFObject

{
    unsigned long long _itemRow;
    NSData *_modelData;
    unsigned long long _modelEncoding;
    NSData *_externalID;
    NSData *_externalData;
}

@property (nonatomic, readonly) unsigned long long itemRow;
@property (nonatomic, readonly) NSData *externalID;
@property (nonatomic, readonly) NSData *externalData;
@property (nonatomic, readonly) NSData *modelData;
@property (nonatomic, readonly) unsigned long long modelEncoding;

- (id)description;
- (id)initWithItemRow:(unsigned long long)arg1 externalID:(id)arg2 externalData:(id)arg3 modelEncoding:(unsigned long long)arg4 modelData:(id)arg5;
- (id)initWithStatement:(struct sqlite3_stmt *)arg1 returning:(unsigned long long)arg2;

@end
