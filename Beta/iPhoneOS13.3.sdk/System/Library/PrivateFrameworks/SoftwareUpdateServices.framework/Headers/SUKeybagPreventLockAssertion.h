/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SUKeybagPreventLockAssertion : NSObject

{
    _Bool _invalidated;
    struct __MKBAssertion *_assertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id)initWithKeybagAssertion:(struct __MKBAssertion *)arg1;

@end
