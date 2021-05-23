/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSDateComponents.h>

@interface NSDateComponents (NSCalendarUnit)

+ (unsigned long long)smaller:(_Bool)arg1 componentsRelativeToComponent:(unsigned long long)arg2;
+ (unsigned long long)_ui_smallerComponentsRelativeToComponent:(unsigned long long)arg1;
+ (unsigned long long)_ui_largerComponentsRelativeToComponent:(unsigned long long)arg1;
+ (id)_ui_namesForComponents:(unsigned long long)arg1;

- (long long)_ui_valueForComponent:(unsigned long long)arg1;
- (void)_ui_setValue:(long long)arg1 forComponent:(unsigned long long)arg2;
- (id)_ui_conciseDescription;
- (void)_ui_setComponents:(id)arg1;

@end
