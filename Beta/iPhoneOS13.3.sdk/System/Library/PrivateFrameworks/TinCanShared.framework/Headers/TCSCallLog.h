/*
 Image: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;

@interface TCSCallLog : NSObject

{
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_calls;
    NSMutableOrderedSet *_identifiers;
}

@property (retain, nonatomic) NSMutableDictionary *calls;
@property (retain, nonatomic) NSMutableOrderedSet *identifiers;

- (id)init;
- (id)callWithUniqueProxyIdentifier:(id)arg1;
- (void)_trimCache;
- (void)addCall:(id)arg1;

@end
