/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSKApplicationDelegate.h>

@class NSArray, NSString;

@protocol TSADownloadDelegate;

@interface TSABaseApplicationDelegate : TSKApplicationDelegate

{
    id <TSADownloadDelegate> _downloadDelegate;
}

@property (nonatomic, readonly) NSString *nativeDocumentType;
@property (nonatomic, readonly) NSString *nativeDocumentExtension;
@property (nonatomic, readonly) NSString *templateDocumentType;
@property (nonatomic, readonly) NSString *templateSFFDocumentType;
@property (nonatomic, readonly) NSString *templateDocumentExtension;
@property (nonatomic, readonly) NSString *tangierEditingFormatDocumentType;
@property (nonatomic, readonly) NSString *nativeSFFDocumentType;
@property (nonatomic, readonly) NSArray *readableDocumentTypes;
@property (nonatomic, readonly) NSArray *importableDocumentTypes;
@property (nonatomic, readonly) NSArray *applicationTemplateVariants;
@property (retain, nonatomic) id <TSADownloadDelegate> downloadDelegate;

+ (id)sharedDelegate;
+ (void)resetSharedConfigurations;
+ (void)presentAlertController:(id)arg1 animated:(_Bool)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)openURL:(id)arg1 sourceDocumentRoot:(id)arg2;
- (id)invalidURLSchemes;
- (id)validURLSchemes;
- (void)persistenceError:(id)arg1;
- (void)registerDefaults;
- (id)applicationTemplateVariantsForLocale:(struct __CFLocale *)arg1;
- (Class)documentRootClass;
- (_Bool)isReadableDocumentType:(id)arg1;
- (double)mimimumAspectRatioForPreviewImage;
- (double)maximumAspectRatioForPreviewImage;
- (_Bool)URLIsValidForImportedHyperlink:(id)arg1;
- (id)existingNestedDocumentPathForPath:(id)arg1;

@end
