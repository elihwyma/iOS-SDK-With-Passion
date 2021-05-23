/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class EDResources, EDString;

__attribute__((visibility("hidden")))
@interface EDTableColumn : NSObject

{
    EDResources *mResources;
    unsigned long long mHeaderRowDxfIndex;
    unsigned long long mTotalsRowDxfIndex;
    unsigned long long mDataAreaDxfIndex;
    EDString *mName;
    EDString *mUniqueName;
    EDString *mTotalsRowLabel;
}

+ (id)tableColumnWithResources:(id)arg1;

- (id)description;
- (id)name;
- (void)setName:(id)arg1;
- (id)uniqueName;
- (void)setUniqueName:(id)arg1;
- (id)initWithResources:(id)arg1;
- (id)headerRowDxf;
- (void)setHeaderRowDxf:(id)arg1;
- (id)totalsRowDxf;
- (void)setTotalsRowDxf:(id)arg1;
- (id)dataAreaDxf;
- (void)setDataAreaDxf:(id)arg1;
- (id)totalsRowLabel;
- (void)setTotalsRowLabel:(id)arg1;
- (unsigned long long)headerRowDxfIndex;
- (void)setHeaderRowDxfIndex:(unsigned long long)arg1;
- (unsigned long long)totalsRowDxfIndex;
- (void)setTotalsRowDxfIndex:(unsigned long long)arg1;
- (unsigned long long)dataAreaDxfIndex;
- (void)setDataAreaDxfIndex:(unsigned long long)arg1;

@end
