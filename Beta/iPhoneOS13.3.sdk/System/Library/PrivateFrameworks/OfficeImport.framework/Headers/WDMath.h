/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/WDRun.h>

@class NSString, WDCharacterProperties;

__attribute__((visibility("hidden")))
@interface WDMath : WDRun

{
    int _justification;
    WDCharacterProperties *_properties;
    NSString *_xmlBlob;
}

@property (nonatomic) int justification;
@property (retain, nonatomic) WDCharacterProperties *properties;
@property (nonatomic, readonly) NSString *xmlBlob;

- (id)description;
- (void)clearProperties;
- (int)runType;
- (id)initWithParagraph:(id)arg1 xmlBlob:(id)arg2;

@end
