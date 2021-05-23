/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMProperty.h>

__attribute__((visibility("hidden")))
@interface EMEnumProperty : CMProperty

{
    int wdValue;
}

+ (id)mapUnderlineValue:(int)arg1;
+ (id)mapHorizontalAlignmentValue:(int)arg1;
+ (id)mapVerticalAlignmentValue:(int)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (int)value;
- (id)mapUnderline;
- (id)initWithEnum:(int)arg1;
- (id)cssStringForName:(id)arg1;
- (id)mapHorizontalAlignment;
- (id)mapVerticalAlignment;

@end
