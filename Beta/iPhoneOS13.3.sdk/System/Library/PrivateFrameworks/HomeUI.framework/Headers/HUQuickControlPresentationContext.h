/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

#import <HomeUI/Swift-Protocol.h>

@class HFItem, HMHome, NSSet, UIViewController;

@protocol NSCopying;

@interface HUQuickControlPresentationContext : NSObject <Swift>

{
    unsigned long long _colorStyle;
    HFItem<NSCopying> *_item;
    NSSet *_controlItems;
    HMHome *_home;
    UIViewController *_sourceViewController;
    struct CGRect _sourceRect;
}

@property (nonatomic) unsigned long long colorStyle;
@property (retain, nonatomic) HFItem<NSCopying> *item;
@property (copy, nonatomic) NSSet *controlItems;
@property (retain, nonatomic) HMHome *home;
@property (nonatomic) struct CGRect sourceRect;
@property (weak, nonatomic) UIViewController *sourceViewController;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
