/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@interface CLAssertion : NSObject

{
    struct CLAssertionInternal *_internal;
}

- (void)dealloc;
- (void)invalidate;
- (id)initWithRegistrationMessageName:(const char *)arg1 messageDictionary:(id)arg2;

@end
