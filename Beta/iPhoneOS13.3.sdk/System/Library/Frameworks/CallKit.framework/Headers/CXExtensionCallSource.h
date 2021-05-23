/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <CallKit/CXCallSource.h>

@class CXProviderExtensionHostContext, NSExtension;

@protocol NSCopying;

@interface CXExtensionCallSource : CXCallSource

{
    CXProviderExtensionHostContext *_extensionContext;
    NSExtension *_extension;
    id <NSCopying> _requestIdentifier;
}

@property (retain, nonatomic) NSExtension *extension;
@property (copy, nonatomic) id <NSCopying> requestIdentifier;
@property (retain, nonatomic) CXProviderExtensionHostContext *extensionContext;

- (id)init;
- (id)identifier;
- (int)processIdentifier;
- (id)bundle;
- (id)initWithExtension:(id)arg1;
- (id)vendorProtocolDelegate;
- (id)initWithExtensionIdentifier:(id)arg1;
- (void)beginWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
