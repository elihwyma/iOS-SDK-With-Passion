/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CKCache : NSObject

{
    NSMutableDictionary *_dictionary;
}

@property (retain, nonatomic) NSMutableDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
