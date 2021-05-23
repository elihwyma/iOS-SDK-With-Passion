/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface OITSUObjectSnapshot : NSObject

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
