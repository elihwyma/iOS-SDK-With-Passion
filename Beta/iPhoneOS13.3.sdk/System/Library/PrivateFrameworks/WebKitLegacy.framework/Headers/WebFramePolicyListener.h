/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebFramePolicyListener : NSObject

{
    struct RefPtr<WebCore::Frame, WTF::DumbPtrTraits<WebCore::Frame>> _frame;
    struct PolicyCheckIdentifier _identifier;
    Function_b3117096 _policyFunction;
    struct RetainPtr<NSURL> _appLinkURL;
    unsigned char _defaultPolicy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)invalidate;
- (id).cxx_construct;
- (void)download;
- (void)use;
- (void)ignore;
- (void)continue;
- (id)initWithFrame:(struct Frame *)arg1 identifier:(struct PolicyCheckIdentifier)arg2 policyFunction:(Function_b3117096 *)arg3 defaultPolicy:(unsigned char)arg4 appLinkURL:(id)arg5;
- (id)initWithFrame:(struct Frame *)arg1 identifier:(struct PolicyCheckIdentifier)arg2 policyFunction:(Function_b3117096 *)arg3 defaultPolicy:(unsigned char)arg4;
- (void)receivedPolicyDecision:(unsigned char)arg1;

@end
