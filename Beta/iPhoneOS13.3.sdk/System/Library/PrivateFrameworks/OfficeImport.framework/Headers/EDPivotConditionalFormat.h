/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class EDCollection;

__attribute__((visibility("hidden")))
@interface EDPivotConditionalFormat : NSObject

{
    unsigned long long mPriority;
    int mType;
    int mScope;
    EDCollection *mPivotAreas;
}

+ (id)pivotConditionalFormat;

- (id)init;
- (id)description;
- (int)type;
- (void)setType:(int)arg1;
- (unsigned long long)priority;
- (void)setPriority:(unsigned long long)arg1;
- (int)scope;
- (void)setScope:(int)arg1;
- (id)pivotAreas;

@end
