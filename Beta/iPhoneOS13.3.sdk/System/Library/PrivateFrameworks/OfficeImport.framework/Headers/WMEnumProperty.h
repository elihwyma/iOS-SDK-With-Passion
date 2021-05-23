/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMProperty.h>

__attribute__((visibility("hidden")))
@interface WMEnumProperty : CMProperty

{
    unsigned long long wdValue;
}

- (id)description;
- (unsigned long long)value;
- (id)mapJustification;
- (id)mapVerticalAlign;
- (id)mapUnderline;
- (id)mapCellTextVAlign;
- (id)initWithEnum:(unsigned long long)arg1;
- (id)cssStringForName:(id)arg1;

@end
