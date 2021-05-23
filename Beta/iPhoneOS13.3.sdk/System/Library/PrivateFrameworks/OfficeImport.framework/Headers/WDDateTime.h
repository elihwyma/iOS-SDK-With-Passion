/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/WDRunWithCharacterProperties.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface WDDateTime : WDRunWithCharacterProperties

{
    NSDate *mDate;
}

- (id)description;
- (id)date;
- (int)runType;
- (id)initWithParagraph:(id)arg1 date:(id)arg2;

@end
