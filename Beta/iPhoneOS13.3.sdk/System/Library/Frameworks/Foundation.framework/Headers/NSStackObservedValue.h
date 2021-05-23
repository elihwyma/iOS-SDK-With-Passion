/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObservedValue.h>

__attribute__((visibility("hidden")))
@interface NSStackObservedValue : NSObservedValue

- (unsigned long long)retainCount;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (void)setValue:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFinished:(_Bool)arg1;

@end
