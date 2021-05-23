/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebCoreFPSContentKeySessionDelegate : NSObject

{
    struct CDMInstanceSessionFairPlayStreamingAVFObjC *_parent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (id)initWithParent:(struct CDMInstanceSessionFairPlayStreamingAVFObjC *)arg1;
- (void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 didProvideRenewingContentKeyRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 didProvidePersistableContentKeyRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 didUpdatePersistableContentKey:(id)arg2 forContentKeyIdentifier:(id)arg3;
- (void)contentKeySession:(id)arg1 contentKeyRequest:(id)arg2 didFailWithError:(id)arg3;
- (_Bool)contentKeySession:(id)arg1 shouldRetryContentKeyRequest:(id)arg2 reason:(id)arg3;
- (void)contentKeySession:(id)arg1 contentKeyRequestDidSucceed:(id)arg2;
- (void)contentKeySessionContentProtectionSessionIdentifierDidChange:(id)arg1;

@end
