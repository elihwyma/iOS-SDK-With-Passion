/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class MSPVectorTimestamp, NSData, NSDate, NSString;

@interface MSPHistoryReplicaSimpleRecord : NSObject

{
    NSData *_contents;
    MSPVectorTimestamp *_contentsTimestamp;
    NSDate *_modificationDate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSData *contents;
@property (copy, nonatomic, readonly) MSPVectorTimestamp *contentsTimestamp;
@property (copy, nonatomic, readonly) NSDate *modificationDate;

+ (id)recordsByApplyingEdits:(id)arg1 toArbitraryRecords:(id)arg2;
+ (id)recordWithContentsOfRecord:(id)arg1;

- (id)init;
- (id)initWithContents:(id)arg1 contentsTimestamp:(id)arg2 modificationDate:(id)arg3;
- (id)derivedRecordWithContents:(id)arg1 contentsTimestamp:(id)arg2;
- (id)derivedRecordWithModificationDate:(id)arg1;

@end
