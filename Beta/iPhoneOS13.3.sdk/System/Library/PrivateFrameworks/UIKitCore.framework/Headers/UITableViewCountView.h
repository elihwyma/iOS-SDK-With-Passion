/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UILabel.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableViewCountView : UILabel

{
    NSString *_countString;
    int _count;
}

- (long long)count;
- (void)setCount:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withCountString:(id)arg2 withCount:(long long)arg3;
- (void)setCountString:(id)arg1 withCount:(long long)arg2;

@end
