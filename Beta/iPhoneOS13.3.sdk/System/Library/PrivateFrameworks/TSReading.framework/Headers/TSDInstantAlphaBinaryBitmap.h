/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSDInstantAlphaBinaryBitmap : NSObject

{
    long long mWidth;
    long long mHeight;
    long long mRowBytes;
    char *mData;
}

- (void)dealloc;
- (id)initWithWidth:(long long)arg1 height:(long long)arg2;
- (void)unionWithBitmap:(id)arg1;

@end
