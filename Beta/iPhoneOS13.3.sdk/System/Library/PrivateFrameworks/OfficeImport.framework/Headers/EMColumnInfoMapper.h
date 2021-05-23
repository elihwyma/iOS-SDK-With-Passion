/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMMapper.h>

@class EDColumnInfo;

__attribute__((visibility("hidden")))
@interface EMColumnInfoMapper : CMMapper

{
    EDColumnInfo *edColumnInfo;
    double columnWidth;
    unsigned long long columnSpan;
}

- (double)columnWidth;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithEDColumnInfo:(id)arg1 maxSpan:(unsigned long long)arg2 parent:(id)arg3;
- (id)initWithDefaultWidth:(double)arg1 span:(unsigned long long)arg2 parent:(id)arg3;

@end
