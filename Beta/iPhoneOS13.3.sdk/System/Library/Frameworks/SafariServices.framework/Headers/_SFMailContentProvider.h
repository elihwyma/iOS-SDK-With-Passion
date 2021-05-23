/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol _SFMailContentProviderDataSource;

@interface _SFMailContentProvider : NSObject

{
    _Bool _restrictAddingPDFContent;
    id <_SFMailContentProviderDataSource> _dataSource;
}

@property (weak, nonatomic) id <_SFMailContentProviderDataSource> dataSource;
@property (nonatomic) _Bool restrictAddingPDFContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (long long)_bestContentTypeForPreferredContentType:(long long)arg1;
- (void)_getWebArchiveDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)_getReaderContentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_getPDFDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)prepareMailComposeViewController:(id)arg1 withMailToURL:(id)arg2 contentURL:(id)arg3 preferredContentType:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_preferentiallyOrderedContentTypes;
- (_Bool)_canProvideContentType:(long long)arg1;
- (id)_preferentiallyOrderedAvailableContentTypes;
- (long long)_defaultPreferredContentType;
- (void)getMailComposeViewControllerWithMailToURL:(id)arg1 contentURL:(id)arg2 preferredContentType:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
