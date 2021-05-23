/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueProxyShareKey : NSObject

{
    NSObject *_container;
    NSString *_key;
}

+ (id)_proxyShare;

- (CDStruct_a70f6672)_proxyLocator;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (void)_proxyNonGCFinalize;

@end
