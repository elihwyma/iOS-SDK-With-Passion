/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMStyle.h>

__attribute__((visibility("hidden")))
@interface WMStyle : CMStyle

- (void)addCharacterProperties:(id)arg1;
- (id)initWithWDStyle:(id)arg1;
- (void)cascadeWithStyle:(id)arg1;
- (id)initWithWDStyle:(id)arg1 isInTextFrame:(_Bool)arg2;
- (void)ResoveInterPropertyDependencies;
- (id)cssStyleString;
- (id)initWithWMStyle:(id)arg1;
- (id)initWithWDCharacterProperties:(id)arg1;

@end
