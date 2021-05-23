/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _CUIPSDSublayerInfo : NSObject

{
    unsigned int _numOfSublayers;
}

+ (id)newWithSublayerCount:(unsigned int)arg1 indexSet:(id)arg2;

- (unsigned int)numberOfSublayers;
- (unsigned int)sublayerAtIndex:(unsigned int)arg1 isValid:(_Bool *)arg2;

@end
