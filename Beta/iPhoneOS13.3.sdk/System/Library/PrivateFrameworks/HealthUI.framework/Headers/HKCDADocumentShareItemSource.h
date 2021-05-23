/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIActivityItemProvider.h>

@class HKCDADocumentSample, HKCDAPDFGenerator, HKHealthStore, NSData, NSURL;

@interface HKCDADocumentShareItemSource : UIActivityItemProvider

{
    HKCDADocumentSample *_documentSample;
    HKHealthStore *_healthStore;
    NSData *_shareData;
    HKCDAPDFGenerator *_generator;
    NSURL *_exportArchiveURL;
}

@property (nonatomic, readonly) HKCDADocumentSample *documentSample;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) NSData *shareData;
@property (nonatomic, readonly) HKCDAPDFGenerator *generator;
@property (nonatomic, readonly) NSURL *exportArchiveURL;

- (void)dealloc;
- (id)item;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)initWithDocumentSample:(id)arg1 healthStore:(id)arg2;
- (id)_simpleError:(id)arg1;
- (void)_buildZipArchiveWithCDA:(id)arg1 generatedPDF:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_generatePDFforCDA:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadShareDataWithHealthStore:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
