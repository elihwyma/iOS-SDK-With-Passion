/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _NSOrderedCollectionDifferenceMoves : NSObject

{
    NSMutableDictionary *_removeDict;
    NSMutableDictionary *_insertDict;
    unsigned long long _firstRemove;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithChanges:(id)arg1;
- (unsigned long long)associatedIndexForChangeWithType:(long long)arg1 index:(unsigned long long)arg2;

@end
