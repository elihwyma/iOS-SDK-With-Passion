/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSError.h>

__attribute__((visibility("hidden")))
@interface NSCFError : NSError

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (unsigned long long)retainCount;
- (_Bool)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (unsigned long long)hash;
- (_Bool)retainWeakReference;
- (_Bool)allowsWeakReference;
- (id)domain;
- (long long)code;
- (id)userInfo;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;

@end
