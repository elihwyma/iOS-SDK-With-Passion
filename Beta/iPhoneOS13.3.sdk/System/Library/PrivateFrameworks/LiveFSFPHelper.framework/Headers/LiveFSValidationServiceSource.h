/*
 Image: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
 */

#import <Foundation/NSObject.h>

@class LiveFSFPExtensionHelper, NSHashTable, NSOperationQueue, NSString;

@interface LiveFSValidationServiceSource : NSObject

{
    LiveFSFPExtensionHelper *_fileProviderExtension;
    NSString *_itemIdentifier;
    NSOperationQueue *_operationQueue;
    NSHashTable *_listeners;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *serviceName;

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)makeListenerEndpointAndReturnError:(id *)arg1;
- (id)initWithFileProviderExtension:(id)arg1 itemIdentifier:(id)arg2;
- (void)validation_allowValidation:(CDUnknownBlockType)arg1;
- (void)validation_evictDocumentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)validation_shareDocumentWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
