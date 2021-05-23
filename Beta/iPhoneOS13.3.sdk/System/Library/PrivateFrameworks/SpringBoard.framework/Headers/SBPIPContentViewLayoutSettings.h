/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface SBPIPContentViewLayoutSettings : NSObject

{
    long long _position;
    double _size;
    NSMutableArray *_observers;
}

@property (nonatomic) long long position;
@property (nonatomic) double size;

+ (void)addObserver:(id)arg1;
+ (void)removeObserver:(id)arg1;
+ (id)_sharedInstance;
+ (void)setContentViewPosition:(long long)arg1;
+ (void)setContentViewSize:(struct CGSize)arg1;
+ (double)contentViewPadding;
+ (long long)currentContentViewPosition;
+ (struct CGSize)currentContentViewSizeForAspectRatio:(struct CGSize)arg1;
+ (struct CGSize)defaultContentViewSizeForAspectRatio:(struct CGSize)arg1;
+ (struct CGSize)minimumContentViewSizeForAspectRatio:(struct CGSize)arg1;
+ (struct CGSize)maximumContentViewSizeForAspectRatio:(struct CGSize)arg1;

- (id)init;
- (void)_removeObserver:(id)arg1;
- (void)_addObserver:(id)arg1;
- (void)_notifyObservers;

@end
