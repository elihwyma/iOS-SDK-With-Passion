/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKMutableArray;

@interface IKCSSSelectorList : NSObject

{
    IKMutableArray *_selectors;
}

@property (nonatomic, readonly) IKMutableArray *selectors;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (void)addSelector:(id)arg1;
- (id)selectorAtIndex:(unsigned long long)arg1;
- (id)firstSelector;
- (id)lastSelector;

@end
