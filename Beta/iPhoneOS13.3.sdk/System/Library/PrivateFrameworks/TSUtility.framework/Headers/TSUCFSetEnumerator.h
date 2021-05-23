/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

@interface TSUCFSetEnumerator : NSObject

{
    void *mInlineObjects[16];
    const void **mObjects;
    long long mCount;
    long long mIndex;
}

- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)nextObject;
- (id)allObjects;
- (id)initWithCFSet:(struct __CFSet *)arg1;

@end
