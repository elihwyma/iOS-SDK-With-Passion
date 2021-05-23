/*
 Image: /System/Library/PrivateFrameworks/C2.framework/C2
 */

#import <Foundation/NSObject.h>

@class C2Session, NSString;

@interface C2SessionTLSCache : NSObject

{
    C2Session *_pinnedSession;
    C2Session *_unpinnedSession;
}

@property (retain, nonatomic) C2Session *pinnedSession;
@property (retain, nonatomic) C2Session *unpinnedSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)sessionForOptions:(id)arg1;
- (id)_createSessionWithTLSPinning:(_Bool)arg1;
- (id)underlyingDelegateQueue;
- (void)C2Session:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)C2Session:(id)arg1 originalHost:(id)arg2 updatedRoute:(id)arg3;

@end
