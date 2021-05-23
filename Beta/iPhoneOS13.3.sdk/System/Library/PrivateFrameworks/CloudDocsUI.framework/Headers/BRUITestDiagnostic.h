/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface BRUITestDiagnostic : NSObject

{
    NSString *_outputDirectoryPath;
    NSMutableDictionary *_diagnosticDataBySectionName;
}

- (_Bool)writeToDiskWithError:(id *)arg1;
- (void)addDiagnosticData:(id)arg1 forFilename:(id)arg2 sectionName:(id)arg3;
- (id)initWithOutputDirectoryPath:(id)arg1;
- (void)addDiagnosticData:(id)arg1 forFilename:(id)arg2;

@end
