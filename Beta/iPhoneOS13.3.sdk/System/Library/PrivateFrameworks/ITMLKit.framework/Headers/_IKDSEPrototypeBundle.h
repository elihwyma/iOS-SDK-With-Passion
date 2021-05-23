/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface _IKDSEPrototypeBundle : NSObject

{
    NSMutableArray *_prototypes;
    NSMutableArray *_entries;
    struct {
        _Bool areEntriesDirty;
    } _flags;
}

- (id)init;
- (id)prototypeForItemAtIndex:(unsigned long long)arg1;
- (id)allPrototypes;
- (void)addPrototype:(id)arg1 forIndexes:(id)arg2;

@end
