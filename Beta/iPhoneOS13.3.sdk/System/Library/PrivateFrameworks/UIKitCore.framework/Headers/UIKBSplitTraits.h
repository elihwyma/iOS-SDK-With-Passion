/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@interface UIKBSplitTraits : NSObject

{
    unsigned long long _corners;
    struct CGRect _leftFrame;
    struct CGRect _rightFrame;
}

@property (nonatomic, readonly) struct CGRect leftFrame;
@property (nonatomic, readonly) struct CGRect rightFrame;
@property (nonatomic, readonly) unsigned long long corners;

+ (id)traitsWithLeftFrame:(struct CGRect)arg1 rightFrame:(struct CGRect)arg2 corners:(unsigned long long)arg3;

- (id)initWithLeftFrame:(struct CGRect)arg1 rightFrame:(struct CGRect)arg2 corners:(unsigned long long)arg3;

@end
