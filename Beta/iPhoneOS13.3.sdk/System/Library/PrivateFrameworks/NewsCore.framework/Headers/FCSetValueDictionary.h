/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSMutableDictionary;

@interface FCSetValueDictionary : NSObject <Swift>

{
    NSMutableDictionary *_backingDictionary;
}

@property (retain, nonatomic) NSMutableDictionary *backingDictionary;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)keyEnumerator;
- (void)addObject:(id)arg1 forKey:(id)arg2;
- (id)objectsForKey:(id)arg1;
- (void)removeObjectsForKey:(id)arg1;
- (id)_setForKey:(id)arg1;
- (void)addObjects:(id)arg1 forKey:(id)arg2;

@end
