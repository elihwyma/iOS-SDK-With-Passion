/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKDynamicProvisioningPageContent.h>

@class NSArray;

@interface PKApplyDocumentUploadPage : PKDynamicProvisioningPageContent

{
    NSArray *_acceptableDocuments;
}

@property (retain, nonatomic) NSArray *acceptableDocuments;

- (id)initWithJSONObject:(id)arg1;

@end
