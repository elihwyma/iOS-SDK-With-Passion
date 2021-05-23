/*
 Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

#import <NSObject.h>

@class NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration;

@protocol NSURLSessionDataDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FigNSURLSession : NSObject

{
    NSURLSessionConfiguration *_configuration;
    NSURLSession *_session;
    id <NSURLSessionDataDelegate> _dataDelegate;
    NSOperationQueue *_opQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_clientBundleIdentifier;
    struct OpaqueFigCFWeakReferenceHolder *_weakAssertion;
    long long _doomTime;
    _Bool _doomCheckScheduled;
}

@property (nonatomic, readonly) NSURLSession *session;
@property (nonatomic, readonly) id <NSURLSessionDataDelegate> dataDelegate;
@property (nonatomic, readonly) NSOperationQueue *opQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) NSString *clientBundleIdentifier;
@property (nonatomic, readonly) struct FigOpaqueAssertion *assertion;
@property (nonatomic) long long doomTime;
@property (nonatomic) _Bool doomCheckScheduled;

- (void)dealloc;
- (void)debug;
- (id)initWithClientBundleIdentifier:(id)arg1 dispatchQueue:(id)arg2;

@end
