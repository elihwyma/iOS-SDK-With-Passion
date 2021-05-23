/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

#import <PencilKit/Swift-Protocol.h>

@class NSUUID;

@interface _PKStrokeData : NSObject <Swift>

{
    struct unique_ptr<_PKStrokeDataPoints, std::__1::default_delete<_PKStrokeDataPoints>> _strokeDataPoints;
    struct _PKStrokeDataPointsPrivate _strokeDataPointsPrivate;
    struct shared_ptr<PKProtobufUnknownFields> _unknownFields;
    unsigned long long _pointsCount;
    unsigned long long _immutablePointsCount;
    unsigned long long _startIndex;
    long long _inputType;
    double _timestamp;
    NSUUID *_strokeDataUUID;
}

@property (nonatomic, readonly) unsigned long long _pointsCount;
@property (nonatomic, readonly) unsigned long long _startIndex;
@property (nonatomic, readonly) unsigned long long _immutablePointsCount;
@property (nonatomic, readonly) _Bool inflight;
@property (nonatomic, readonly) long long _inputType;
@property (nonatomic, readonly) double _timestamp;
@property (nonatomic, readonly) NSUUID *_strokeDataUUID;
@property (nonatomic, readonly) _Bool hasPointTimestampData;
@property (nonatomic, readonly) const struct _PKStrokeDataPoints *_points;

+ (id)strokeDataFromDataArchive:(const struct StrokeData *)arg1;
+ (void)calculateOffsets;
+ (void)_calculateOffsets:(unsigned long long *)arg1 sizes:(unsigned long long *)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id).cxx_construct;
- (struct PKCompressedStrokePoint)pointAt:(unsigned long long)arg1;
- (id)deltaTo:(id)arg1;
- (_Bool)saveToDataArchive:(struct StrokeData *)arg1;
- (id)dataApplying:(id)arg1;
- (id)initWithPoints:(struct PKCompressedStrokePoint *)arg1 count:(unsigned long long)arg2 immutableCount:(unsigned long long)arg3 inputType:(long long)arg4 timestamp:(double)arg5 UUID:(id)arg6;
- (void)setPoints:(struct PKCompressedStrokePoint *)arg1 pointsCount:(unsigned long long)arg2;
- (void)setPointsFrom:(id)arg1 range:(struct _NSRange)arg2;
- (id)initWithData:(id)arg1 range:(struct _NSRange)arg2 UUID:(id)arg3;
- (struct _PKStrokeDataPoints *)_mutablePoints;
- (void)readStrokeDataFromArchive:(const struct StrokeData *)arg1;

@end
