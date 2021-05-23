/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBDisableActiveInterfaceOrientationChangeAssertion : NSObject

{
    NSString *_reason;
    _Bool _invalidated;
    _Bool _nudge;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id)initWithReason:(id)arg1 nudgeOrientationOnInvalidate:(_Bool)arg2;

@end
