/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXFeedbackTapToRadarUtilities : NSObject

+ (id)summaryDescription;
+ (id)attachmentURLForDiagnosticDictionaries:(id)arg1 descriptionName:(id)arg2;
+ (id)alertControllerWithPrivacyMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)internalReleaseAgreement;
+ (void)presentTermsAndConditionsForUIViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)fileRadarWithTitle:(id)arg1 description:(id)arg2 classification:(id)arg3 componentID:(id)arg4 componentName:(id)arg5 componentVersion:(id)arg6 keyword:(id)arg7 attachmentURLs:(id)arg8 includeSysDiagnose:(_Bool)arg9 completionHandler:(CDUnknownBlockType)arg10;
+ (void)fileRadarWithTitle:(id)arg1 description:(id)arg2 classification:(id)arg3 componentID:(id)arg4 componentName:(id)arg5 componentVersion:(id)arg6 keyword:(id)arg7 screenshotURLs:(id)arg8 attachmentURLs:(id)arg9 includeSysDiagnose:(_Bool)arg10 includeInternalRelease:(_Bool)arg11 additionalExtensionIdentifiers:(id)arg12 completionHandler:(CDUnknownBlockType)arg13;
+ (id)captureScreenshot;
+ (id)_tempDirectoryURL;

@end
