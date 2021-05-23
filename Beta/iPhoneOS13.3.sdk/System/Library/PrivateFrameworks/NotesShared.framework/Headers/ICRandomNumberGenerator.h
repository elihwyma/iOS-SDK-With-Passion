/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@interface ICRandomNumberGenerator : NSObject

{
    unsigned int _randomSeed;
}

- (id)initWithSeed:(unsigned int)arg1;
- (unsigned long long)randomIndexMin:(unsigned long long)arg1 max:(unsigned long long)arg2;
- (double)randomFloat;
- (id)randomObject:(id)arg1;

@end
