/*
 Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface NFCallbackStore : NSObject

{
    NSMutableDictionary *_store;
}

@property (nonatomic, readonly) NSMutableDictionary *store;

- (id)init;
- (void)storeCallbackDefinition:(id)arg1 forKey:(id)arg2 scope:(id)arg3;
- (id)lookupForKey:(id)arg1;

@end
