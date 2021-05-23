/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@interface HUIconCellContentMetrics : NSObject

{
    struct CGSize _iconSize;
    struct UIEdgeInsets _contentInset;
}

@property (nonatomic) struct CGSize iconSize;
@property (nonatomic) struct UIEdgeInsets contentInset;

+ (id)compactMetrics;
+ (id)defaultMetrics;

@end
