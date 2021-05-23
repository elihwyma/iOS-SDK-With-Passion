/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HMFoundation/HMFObject.h>

@class NSDate, NSString;

@interface HMICameraVideoResourceAttributes : HMFObject

{
    NSDate *_creationDate;
    unsigned long long _lastSequenceNumber;
    unsigned long long _firstSequenceNumber;
    double _nominalFrameRate;
    struct CGSize _dimensions;
    CDStruct_1b6d18a9 _assetDuration;
}

@property (readonly) CDStruct_1b6d18a9 assetDuration;
@property (readonly) NSDate *creationDate;
@property (readonly) unsigned long long lastSequenceNumber;
@property (readonly) unsigned long long firstSequenceNumber;
@property (readonly) double nominalFrameRate;
@property (readonly) struct CGSize dimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (_Bool)isEqual:(id)arg1;
- (id)initWithAssetData:(id)arg1 error:(id *)arg2;
- (id)initWithAssetDuration:(CDStruct_1b6d18a9)arg1 creationDate:(id)arg2 firstSequenceNumber:(unsigned long long)arg3 lastSequenceNumber:(unsigned long long)arg4;
- (id)initWithAssetDuration:(CDStruct_1b6d18a9)arg1 creationDate:(id)arg2 firstSequenceNumber:(unsigned long long)arg3 lastSequenceNumber:(unsigned long long)arg4 nominalFrameRate:(double)arg5 dimensions:(struct CGSize)arg6;
- (id)initWithAssetDuration:(CDStruct_1b6d18a9)arg1 creationDate:(id)arg2;

@end
