/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface SBGreenController : NSObject

{
    NSArray *_relevantGreenKeys;
    unsigned long long _fileExistenceState;
}

- (id)init;
- (void)performPreBuddyWork;
- (void)_readFileStateFromDisk;
- (id)_defaultValuesDictionaryAndState:(unsigned long long *)arg1;
- (_Bool)_writeGreenValuesToDisk:(id)arg1 withState:(unsigned long long)arg2;
- (unsigned long long)_effectivePlaceIsAmbiguous:(_Bool *)arg1;
- (id)_deviceRegionCode;

@end
