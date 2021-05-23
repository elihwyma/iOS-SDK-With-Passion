/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class OADTableCellProperties, OADTextBody;

__attribute__((visibility("hidden")))
@interface OADTableCell : NSObject

{
    OADTextBody *mTextBody;
    OADTableCellProperties *mProperties;
    int mRowSpan;
    int mGridSpan;
    _Bool mHorzMerge;
    _Bool mVertMerge;
    int mTopRow;
    int mLeftColumn;
}

- (id)init;
- (id)description;
- (id)properties;
- (void)setProperties:(id)arg1;
- (_Bool)merge:(int)arg1;
- (int)rowSpan;
- (id)textBody;
- (void)setTextBody:(id)arg1;
- (void)setRowSpan:(int)arg1;
- (void)setTopRow:(int)arg1;
- (int)topRow;
- (_Bool)horzMerge;
- (_Bool)vertMerge;
- (int)gridSpan;
- (void)setGridSpan:(int)arg1;
- (void)setHorzMerge:(_Bool)arg1;
- (void)setVertMerge:(_Bool)arg1;
- (int)spanAlongDir:(int)arg1;
- (int)leftColumn;
- (void)setLeftColumn:(int)arg1;

@end
