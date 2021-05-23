/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString, WDTableCellProperties, WDTableRow, WDText;

__attribute__((visibility("hidden")))
@interface WDTableCell : NSObject

{
    unsigned long long mIndex;
    WDTableCellProperties *mProperties;
    WDText *mText;
    NSString *mIdentifier;
    _Bool mUseTrackedProperties;
    WDTableRow *mRow;
}

@property (weak, readonly) WDTableRow *row;

- (id)description;
- (id)identifier;
- (unsigned long long)index;
- (void)setIdentifier:(id)arg1;
- (id)properties;
- (id)text;
- (void)clearProperties;
- (_Bool)useTrackedProperties;
- (void)setUseTrackedProperties:(_Bool)arg1;
- (id)initWithRow:(id)arg1 at:(unsigned long long)arg2;
- (long long)compareIndex:(id)arg1;

@end
