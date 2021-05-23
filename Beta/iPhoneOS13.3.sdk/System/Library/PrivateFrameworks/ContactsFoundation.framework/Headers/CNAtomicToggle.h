/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@interface CNAtomicToggle : NSObject

{
    _Atomic _Bool _state;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithState:(_Bool)arg1;
- (_Bool)trySetState:(_Bool)arg1;

@end
