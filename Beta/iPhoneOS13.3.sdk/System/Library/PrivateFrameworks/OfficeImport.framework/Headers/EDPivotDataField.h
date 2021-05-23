/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EDPivotDataField : NSObject

{
    long long mBaseField;
    unsigned long long mBaseItem;
    unsigned long long mFieldId;
    unsigned long long mNumFmtId;
    NSString *mName;
    int mFormat;
}

+ (id)pivotDataField;

- (id)init;
- (id)description;
- (id)name;
- (void)setName:(id)arg1;
- (unsigned long long)fieldId;
- (void)setFieldId:(unsigned long long)arg1;
- (unsigned long long)baseItem;
- (unsigned long long)numFmtId;
- (void)setNumFmtId:(unsigned long long)arg1;
- (long long)baseField;
- (void)setBaseField:(long long)arg1;
- (void)setBaseItem:(unsigned long long)arg1;
- (int)showDataAs;
- (void)setShowDataAs:(int)arg1;

@end
