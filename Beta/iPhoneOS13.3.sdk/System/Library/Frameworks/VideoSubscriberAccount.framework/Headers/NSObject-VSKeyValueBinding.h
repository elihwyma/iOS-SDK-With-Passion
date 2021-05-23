/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@interface NSObject (VSKeyValueBinding)

- (id)vs_unbinderCreatingIfNeeded:(_Bool)arg1;
- (id)vs_binderCreatingIfNeeded:(_Bool)arg1;
- (void)vs_bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (void)vs_unbind:(id)arg1;
- (id)vs_valueForBinding:(id)arg1;
- (void)vs_setValue:(id)arg1 forBinding:(id)arg2;

@end
