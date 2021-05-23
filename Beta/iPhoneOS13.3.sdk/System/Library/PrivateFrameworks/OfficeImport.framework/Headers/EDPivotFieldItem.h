/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EDPivotFieldItem : NSObject

{
    _Bool mChildItems;
    _Bool mExpanded;
    _Bool mCalculatedMember;
    _Bool mMissed;
    _Bool mHidden;
    _Bool mDetailsHidden;
    int mType;
    unsigned long long mItemIndex;
}

+ (id)pivotFieldItem;

- (id)init;
- (id)description;
- (int)type;
- (void)setType:(int)arg1;
- (void)setHidden:(_Bool)arg1;
- (unsigned long long)itemIndex;
- (void)setItemIndex:(unsigned long long)arg1;
- (void)setExpanded:(_Bool)arg1;
- (_Bool)expanded;
- (_Bool)hidden;
- (_Bool)childItems;
- (void)setChildItems:(_Bool)arg1;
- (_Bool)missed;
- (void)setMissed:(_Bool)arg1;
- (_Bool)calculatedMember;
- (void)setCalculatedMember:(_Bool)arg1;
- (_Bool)detailsHidden;
- (void)setDetailsHidden:(_Bool)arg1;

@end
