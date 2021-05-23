/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSUUID;

@interface ATXMinimalSlotResolutionParameters : NSObject

{
    unsigned long long _paramHash;
    NSUUID *_slotSetUuid;
    unsigned long long _slotHash;
    unsigned long long _paramCount;
}

@property (nonatomic, readonly) unsigned long long slotHash;
@property (nonatomic, readonly) unsigned long long paramCount;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithParameterHash:(unsigned long long)arg1 slotHash:(unsigned long long)arg2 uuid:(id)arg3 paramCount:(unsigned long long)arg4;
- (id)initWithAction:(id)arg1 slots:(id)arg2;
- (id)actionAndSlotSet;

@end
