/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class NSData, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMBLocalSQLContextRowRecord : HMFObject

{
    unsigned long long _recordRow;
    NSData *_externalData;
    NSData *_externalID;
    NSUUID *_modelID;
    unsigned long long _modelEncoding;
    NSData *_modelData;
    NSUUID *_modelSchema;
    unsigned long long _pushEncoding;
    NSData *_pushData;
    unsigned long long _pushBlockRow;
    NSString *_modelType;
}

@property (nonatomic, readonly) unsigned long long recordRow;
@property (nonatomic, readonly) NSData *externalData;
@property (nonatomic, readonly) NSData *externalID;
@property (nonatomic, readonly) unsigned long long modelEncoding;
@property (nonatomic, readonly) NSUUID *modelID;
@property (nonatomic, readonly) NSData *modelData;
@property (nonatomic, readonly) NSUUID *modelSchema;
@property (nonatomic, readonly) NSString *modelType;
@property (nonatomic, readonly) unsigned long long pushEncoding;
@property (nonatomic, readonly) NSData *pushData;
@property (nonatomic, readonly) unsigned long long pushBlockRow;

- (id)attributeDescriptions;
- (id)initWithStatement:(struct sqlite3_stmt *)arg1 returning:(unsigned long long)arg2;
- (id)initWithRecordRow:(unsigned long long)arg1 externalID:(id)arg2 externalData:(id)arg3 modelID:(id)arg4 modelEncoding:(unsigned long long)arg5 modelData:(id)arg6 modelSchema:(id)arg7 modelType:(id)arg8 pushEncoding:(unsigned long long)arg9 pushData:(id)arg10 pushBlockRow:(unsigned long long)arg11;

@end
