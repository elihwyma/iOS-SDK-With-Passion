/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/_SFActivityItemProvider.h>

@class NSData, NSString;

@interface _SFImageActivityItemProvider : _SFActivityItemProvider

{
    NSData *_imageOnlyDocumentData;
    NSString *_documentUTI;
}

- (id)item;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)_imageData;
- (id)initWithWebView:(id)arg1;

@end
