/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class EDCollection;

__attribute__((visibility("hidden")))
@interface EDPivotField : NSObject

{
    int mAxis;
    _Bool mCompact;
    _Bool mDataField;
    _Bool mShowDefaultSubTotal;
    _Bool mInsertBlankRow;
    _Bool mOutlineItems;
    _Bool mShowAllItems;
    _Bool mSubtotalTop;
    unsigned long long mNumFmtId;
    EDCollection *mPivotFieldItems;
}

+ (id)pivotField;

- (id)init;
- (id)description;
- (_Bool)compact;
- (int)axis;
- (void)setAxis:(int)arg1;
- (void)setCompact:(_Bool)arg1;
- (_Bool)dataField;
- (void)setDataField:(_Bool)arg1;
- (_Bool)showDefaultSubTotal;
- (void)setShowDefaultSubTotal:(_Bool)arg1;
- (_Bool)insertBlankRow;
- (void)setInsertBlankRow:(_Bool)arg1;
- (_Bool)outlineItems;
- (void)setOutlineItems:(_Bool)arg1;
- (_Bool)showAllItems;
- (void)setShowAllItems:(_Bool)arg1;
- (_Bool)subtotalTop;
- (void)setSubtotalTop:(_Bool)arg1;
- (unsigned long long)numFmtId;
- (void)setNumFmtId:(unsigned long long)arg1;
- (id)pivotFieldItems;

@end
