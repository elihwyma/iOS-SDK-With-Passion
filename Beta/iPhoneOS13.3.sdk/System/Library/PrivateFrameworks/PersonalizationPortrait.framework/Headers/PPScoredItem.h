/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <_PASZonedObject.h>

@class NSObject;

@protocol NSCopying><NSSecureCoding;

@interface PPScoredItem : _PASZonedObject

{
    unsigned short _resultPosition;
    unsigned short _resultCount;
    NSObject<NSCopying><NSSecureCoding> *_item;
    double _score;
}

@property (nonatomic, readonly) unsigned short resultPosition;
@property (nonatomic, readonly) unsigned short resultCount;
@property (nonatomic, readonly) NSObject<NSCopying><NSSecureCoding> *item;
@property (nonatomic, readonly) double score;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItem:(id)arg1 score:(double)arg2 resultPosition:(unsigned short)arg3 resultCount:(unsigned short)arg4;
- (id)initWithItem:(id)arg1 score:(double)arg2;
- (_Bool)isEqualToScoredItem:(id)arg1;

@end
