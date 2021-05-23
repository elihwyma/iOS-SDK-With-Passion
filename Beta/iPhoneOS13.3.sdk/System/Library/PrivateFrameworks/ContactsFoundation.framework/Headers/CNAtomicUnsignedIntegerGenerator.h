/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@interface CNAtomicUnsignedIntegerGenerator : NSObject

{
    _Atomic long long _n;
}

- (id)init;
- (unsigned long long)nextUnsignedInteger;

@end
