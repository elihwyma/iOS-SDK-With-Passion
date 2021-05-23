/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface BBMaskedSet : NSObject

{
    unsigned long long _maskBits;
    NSMutableArray *_maskObjectSets;
}

@property (retain, nonatomic) NSMutableArray *maskObjectSets;

- (void)removeObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)allObjects;
- (id)initWithMaskBits:(unsigned long long)arg1;
- (id)objectsForMask:(unsigned long long)arg1;
- (void)addObject:(id)arg1 withMask:(unsigned long long)arg2;
- (void)_executeUsingMask:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;

@end
