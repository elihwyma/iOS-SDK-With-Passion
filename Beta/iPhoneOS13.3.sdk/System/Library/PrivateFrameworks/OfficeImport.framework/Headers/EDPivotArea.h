/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class EDCollection, EDReference;

__attribute__((visibility("hidden")))
@interface EDPivotArea : NSObject

{
    _Bool mGrandCol;
    _Bool mGrandRow;
    _Bool mOutline;
    int mType;
    EDCollection *mReferences;
    EDReference *mOffset;
}

+ (id)pivotArea;

- (id)init;
- (id)description;
- (int)type;
- (void)setType:(int)arg1;
- (void)setOffset:(id)arg1;
- (id)offset;
- (_Bool)outline;
- (void)setOutline:(_Bool)arg1;
- (id)references;
- (_Bool)grandRow;
- (void)setGrandRow:(_Bool)arg1;
- (_Bool)grandCol;
- (void)setGrandCol:(_Bool)arg1;

@end
