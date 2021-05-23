/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EDPivotAreaReference : NSObject

{
    _Bool mByPosition;
    _Bool mRelative;
    _Bool mSelected;
    unsigned long long mFieldId;
    unsigned long long mCount;
}

+ (id)pivotAreaReference;

- (id)init;
- (id)description;
- (unsigned long long)count;
- (void)setCount:(unsigned long long)arg1;
- (void)setSelected:(_Bool)arg1;
- (_Bool)selected;
- (unsigned long long)fieldId;
- (void)setFieldId:(unsigned long long)arg1;
- (_Bool)relative;
- (void)setRelative:(_Bool)arg1;
- (_Bool)byPosition;
- (void)setByPosition:(_Bool)arg1;

@end
