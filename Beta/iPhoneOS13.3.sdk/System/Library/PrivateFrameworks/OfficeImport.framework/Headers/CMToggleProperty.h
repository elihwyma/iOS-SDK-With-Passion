/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMProperty.h>

__attribute__((visibility("hidden")))
@interface CMToggleProperty : CMProperty

{
    int wdValue;
}

- (int)value;
- (int)compareValue:(id)arg1;
- (id)initWithCMTogglePropertyValue:(int)arg1;
- (id)cssStringForName:(id)arg1;
- (void)resolveWithBaseProperty:(id)arg1;
- (id)mapBold;
- (id)mapItalic;
- (id)mapStrikeTrough;

@end
