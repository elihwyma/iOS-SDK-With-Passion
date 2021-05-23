/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class PDAssertion;

@protocol OS_dispatch_source;

@interface PDAssertionRequest : NSObject

{
    PDAssertion *_assertion;
    CDUnknownBlockType _resultHandler;
    NSObject<OS_dispatch_source> *_invalidationTimer;
}

@property (retain, nonatomic) PDAssertion *assertion;
@property (copy, nonatomic) CDUnknownBlockType resultHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *invalidationTimer;

- (unsigned long long)hash;
- (id)initWithAssertion:(id)arg1 delegate:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;

@end
