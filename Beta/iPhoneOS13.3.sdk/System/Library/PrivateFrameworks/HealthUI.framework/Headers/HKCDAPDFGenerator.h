/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@interface HKCDAPDFGenerator : NSObject

+ (id)PDFTranslator;

- (id)init;
- (void)_pdfForHTML:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_finishGenerationWithURL:(id)arg1 tempFileDescriptor:(int)arg2 completionHandler:(CDUnknownBlockType)arg3 error:(id)arg4;
- (void)generatePDFForCDAXML:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
