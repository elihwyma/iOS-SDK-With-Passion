/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSMutableSet.h>

@class NSObject, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueMutableSet : NSMutableSet

{
    NSObject *_container;
    NSString *_key;
}

+ (id)_proxyShare;

- (void)dealloc;
- (CDStruct_a70f6672)_proxyLocator;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (void)_proxyNonGCFinalize;

@end
