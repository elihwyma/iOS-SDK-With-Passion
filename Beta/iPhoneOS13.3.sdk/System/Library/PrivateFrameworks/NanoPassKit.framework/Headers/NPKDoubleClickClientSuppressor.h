/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NPKAssertion, NSMutableIndexSet;

@protocol OS_dispatch_queue;

@interface NPKDoubleClickClientSuppressor : NSObject

{
    NPKAssertion *_suppressionAssertion;
    NSMutableIndexSet *_suppressionRequestTokens;
    unsigned long long _nextSuppressionRequestToken;
    NSObject<OS_dispatch_queue> *_suppressorQueue;
}

@property (retain, nonatomic) NPKAssertion *suppressionAssertion;
@property (retain) NSMutableIndexSet *suppressionRequestTokens;
@property (nonatomic) unsigned long long nextSuppressionRequestToken;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *suppressorQueue;

+ (id)sharedInstance;
+ (unsigned long long)requestDoubleClickClientSuppressionWithResponseHandler:(CDUnknownBlockType)arg1;
+ (void)endDoubleClickClientSuppressionWithRequestToken:(unsigned long long)arg1;
+ (_Bool)isSuppressingDoubleClickClients;

- (id)init;
- (void)dealloc;
- (void)_acquireSuppressionAssertionIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)_acquireSuppressionAssertionWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)requestDoubleClickClientSuppressionWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)endDoubleClickClientSuppressionWithRequestToken:(unsigned long long)arg1;
- (_Bool)isSuppressingDoubleClickClients;
- (void)_postSuppressionStateChanged;

@end
