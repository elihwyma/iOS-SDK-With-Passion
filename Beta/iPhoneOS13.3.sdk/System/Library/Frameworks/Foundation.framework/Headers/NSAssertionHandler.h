/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@interface NSAssertionHandler : NSObject

{
    void *_reserved;
}

+ (id)currentHandler;

- (void)handleFailureInMethod:(SEL)arg1 object:(id)arg2 file:(id)arg3 lineNumber:(long long)arg4 description:(id)arg5;
- (void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 description:(id)arg4;

@end
