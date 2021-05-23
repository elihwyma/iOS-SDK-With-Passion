/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface SUObjectPool : NSObject

{
    NSMutableDictionary *_poolObjects;
    NSMutableArray *_vendedObjects;
}

@property (nonatomic, readonly) NSArray *vendedObjects;

- (void)dealloc;
- (id)copyPoppedObjectForClass:(Class)arg1;
- (id)addObjectsOfClass:(Class)arg1 count:(long long)arg2 forClass:(Class)arg3;
- (void)addObjects:(id)arg1 forClass:(Class)arg2;

@end
