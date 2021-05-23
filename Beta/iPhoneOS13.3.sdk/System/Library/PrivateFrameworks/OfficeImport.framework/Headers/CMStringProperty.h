/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMProperty.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CMStringProperty : CMProperty

{
    NSString *wdValue;
}

- (id)initWithString:(id)arg1;
- (id)value;
- (id)cssStringForName:(id)arg1;

@end
