/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSUUID;

@interface PPFixup49995922Tuple : NSObject

{
    long long _rowid;
    NSObject *_record;
    NSUUID *_dkUUID;
}

@property (nonatomic, readonly) long long rowid;
@property (nonatomic, readonly) NSObject *record;
@property (nonatomic, readonly) NSUUID *dkUUID;

+ (id)tupleWithRowid:(long long)arg1 record:(id)arg2 dkUUID:(id)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRowid:(long long)arg1 record:(id)arg2 dkUUID:(id)arg3;
- (_Bool)isEqualToTuple:(id)arg1;

@end
