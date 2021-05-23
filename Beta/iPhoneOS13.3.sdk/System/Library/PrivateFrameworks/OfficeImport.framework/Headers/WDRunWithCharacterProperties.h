/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/WDRun.h>

@class WDCharacterProperties;

__attribute__((visibility("hidden")))
@interface WDRunWithCharacterProperties : WDRun

{
    WDCharacterProperties *mProperties;
}

@property (retain) WDCharacterProperties *properties;
@property (readonly, getter=isHidden) _Bool hidden;

- (void)clearProperties;
- (id)initWithParagraph:(id)arg1;

@end
