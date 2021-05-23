/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSData, NSString, NTPBRecordBase, PBCodable;

@interface FCFaultableRecord : NSObject <Swift>

{
    struct os_unfair_lock_s _recordLock;
    PBCodable *_record;
    NSData *_recordData;
    NTPBRecordBase *_recordBase;
}

@property (retain, nonatomic) NSData *recordData;
@property (retain, nonatomic) NTPBRecordBase *recordBase;
@property (retain, nonatomic) PBCodable *record;
@property (nonatomic) struct os_unfair_lock_s recordLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)arg1;
+ (id)faultableRecordWithRecord:(id)arg1;
+ (id)faultableRecordWithRecordData:(id)arg1;

- (id)init;
- (void)writeToKeyValuePair:(id)arg1;

@end
