/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSDate, NSMutableIndexSet, PKAssertion;

@protocol OS_dispatch_queue;

@interface PKAutomaticPassPresentationSuppressor : NSObject

{
    PKAssertion *_suppressionAssertion;
    NSMutableIndexSet *_suppressionRequestTokens;
    NSMutableIndexSet *_backgrounedSuppressionIdentifiers;
    NSDate *_backgroundedDate;
    unsigned long long _nextRequestToken;
    NSObject<OS_dispatch_queue> *_suppressorQueue;
}

@property (nonatomic, readonly) _Bool isSuppressing;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (unsigned long long)requestSuppressionWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)endSuppressionWithRequestToken:(unsigned long long)arg1;
- (void)_acquireSuppressionAssertionIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)_acquireSuppressionAssertionWithCompletion:(CDUnknownBlockType)arg1;

@end
