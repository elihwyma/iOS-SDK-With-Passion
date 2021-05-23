/*
 Image: /System/Library/PrivateFrameworks/Cards.framework/Cards
 */

#import <Cards/CRInvocationChain.h>

@class NSString, Protocol;

@protocol CRInvocationChainDelegate;

@interface CRProtocolRestrictedInvocationChain : CRInvocationChain

{
    Protocol *_restrictingProtocol;
}

@property (weak, nonatomic) id <CRInvocationChainDelegate> delegate;
@property (retain, nonatomic) Protocol *restrictingProtocol;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)invocationChain:(id)arg1 shouldForwardInvocation:(id)arg2 toTarget:(id)arg3;
- (_Bool)isEligibleForSelector:(SEL)arg1;
- (_Bool)_selectorIsPartOfRestrictingProtocol:(SEL)arg1;
- (_Bool)_selector:(SEL)arg1 isPartOfProtocol:(id)arg2;

@end
