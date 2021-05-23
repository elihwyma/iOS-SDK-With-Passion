/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <AppSupport/CPLRUDictionary.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKLRUCache : CPLRUDictionary

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithMaximumCapacity:(unsigned long long)arg1;

@end
