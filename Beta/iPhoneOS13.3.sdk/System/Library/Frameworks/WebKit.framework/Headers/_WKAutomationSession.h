/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString, _WKAutomationSessionConfiguration;

@protocol _WKAutomationSessionDelegate;

@interface _WKAutomationSession : NSObject

{
    struct ObjectStorage<WebKit::WebAutomationSession> _session;
    struct RetainPtr<_WKAutomationSessionConfiguration> _configuration;
    struct WeakObjCPtr<id<_WKAutomationSessionDelegate>> _delegate;
}

@property (copy, nonatomic) NSString *sessionIdentifier;
@property (copy, nonatomic, readonly) _WKAutomationSessionConfiguration *configuration;
@property (weak, nonatomic) id <_WKAutomationSessionDelegate> delegate;
@property (nonatomic, readonly, getter=isPaired) _Bool paired;
@property (nonatomic, readonly, getter=isSimulatingUserInteraction) _Bool simulatingUserInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (id)init;
- (void)dealloc;
- (void)terminate;
- (id).cxx_construct;
- (id)initWithConfiguration:(id)arg1;

@end
