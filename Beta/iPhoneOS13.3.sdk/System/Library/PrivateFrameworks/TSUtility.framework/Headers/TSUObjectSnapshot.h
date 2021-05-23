/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface TSUObjectSnapshot : NSObject

{
    unsigned long long mEntryCount;
    void **mSnapshot;
    NSArray *mCompared;
}

- (id)init;
- (void)dealloc;
- (void)p_clear;
- (void)calibrate:(id)arg1;
- (void)compare;

@end
