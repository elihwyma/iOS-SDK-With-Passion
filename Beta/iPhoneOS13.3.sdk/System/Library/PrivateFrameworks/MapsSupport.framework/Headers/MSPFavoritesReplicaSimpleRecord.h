/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class MSPPosition, MSPVectorTimestamp, NSData, NSString;

@interface MSPFavoritesReplicaSimpleRecord : NSObject

{
    NSData *_contents;
    MSPVectorTimestamp *_contentsTimestamp;
    MSPPosition *_position;
    MSPVectorTimestamp *_positionTimestamp;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSData *contents;
@property (copy, nonatomic, readonly) MSPVectorTimestamp *contentsTimestamp;
@property (nonatomic, readonly) MSPPosition *position;
@property (nonatomic, readonly) MSPVectorTimestamp *positionTimestamp;

+ (id)recordsByApplyingEdits:(id)arg1 toArbitraryRecords:(id)arg2;
+ (id)recordWithContentsOfRecord:(id)arg1;

- (id)init;
- (id)initWithContents:(id)arg1 contentsTimestamp:(id)arg2 position:(id)arg3 positionTimestamp:(id)arg4;
- (id)derivedRecordWithContents:(id)arg1 contentsTimestamp:(id)arg2;
- (id)derivedRecordWithPosition:(id)arg1 positionTimestamp:(id)arg2;

@end
