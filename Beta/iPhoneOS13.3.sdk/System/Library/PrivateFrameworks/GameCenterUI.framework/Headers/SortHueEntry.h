/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@interface SortHueEntry : NSObject

{
    long long _hue;
    long long _count;
}

@property (nonatomic) long long hue;
@property (nonatomic) long long count;

- (id)description;
- (id)initWithHue:(unsigned int)arg1 count:(unsigned int)arg2;

@end
