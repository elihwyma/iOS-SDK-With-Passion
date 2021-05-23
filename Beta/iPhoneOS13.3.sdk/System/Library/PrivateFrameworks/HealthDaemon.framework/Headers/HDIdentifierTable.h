/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

@interface HDIdentifierTable : NSObject

{
    NSMapTable *_map;
    unsigned long long _nextIdentifier;
}

@property (retain, nonatomic) NSMapTable *map;
@property (nonatomic) unsigned long long nextIdentifier;

- (unsigned long long)count;
- (unsigned long long)addObject:(id)arg1;
- (void)removeAllObjects;
- (id)allObjects;
- (void)removeObjectWithIdentifier:(unsigned long long)arg1;
- (id)objectWithIdentifier:(unsigned long long)arg1;

@end
