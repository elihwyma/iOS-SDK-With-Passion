/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBInAppStatusBarHiddenAssertion : NSObject

{
    NSString *_identifier;
    NSString *_reason;
    CDUnknownBlockType _invalidationBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id)initWithIdentifier:(id)arg1 forReason:(id)arg2 invalidationBlock:(CDUnknownBlockType)arg3;
- (void)invalidateWithAnimation:(_Bool)arg1;

@end
