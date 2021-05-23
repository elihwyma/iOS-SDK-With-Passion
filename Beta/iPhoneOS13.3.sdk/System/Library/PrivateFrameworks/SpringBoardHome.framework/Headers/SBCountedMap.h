/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSMutableDictionary;

@interface SBCountedMap : NSObject

{
    NSCountedSet *_countedKeys;
    NSMutableDictionary *_map;
}

- (id)init;
- (_Bool)containsKey:(id)arg1;
- (_Bool)containsValue:(id)arg1;
- (_Bool)checkinValue:(id)arg1;
- (id)checkoutValueForKey:(id)arg1 creationBlock:(CDUnknownBlockType)arg2;
- (void)checkinValues:(id)arg1;

@end
