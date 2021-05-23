/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EDPivotPageField : NSObject

{
    unsigned long long mFieldId;
    NSString *mCap;
    NSString *mName;
}

+ (id)pivotPageField;

- (id)init;
- (id)description;
- (id)name;
- (void)setName:(id)arg1;
- (unsigned long long)fieldId;
- (void)setFieldId:(unsigned long long)arg1;
- (id)cap;
- (void)setCap:(id)arg1;

@end
