/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebCDMSessionAVContentKeySessionDelegate : NSObject

{
    struct CDMSessionAVContentKeySession *m_parent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (id)initWithParent:(struct CDMSessionAVContentKeySession *)arg1;
- (void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2;
- (void)contentKeySessionContentProtectionSessionIdentifierDidChange:(id)arg1;

@end
