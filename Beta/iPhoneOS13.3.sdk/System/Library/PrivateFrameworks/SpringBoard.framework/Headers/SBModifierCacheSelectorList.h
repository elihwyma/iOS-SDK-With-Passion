/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@interface SBModifierCacheSelectorList : NSObject

{
    long long selCount;
    SEL *sels;
}

- (id)initWithSelectors:(SEL *)arg1 count:(long long)arg2;

@end
