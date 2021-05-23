/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, SKUILockupViewElement;

__attribute__((visibility("hidden")))
@interface SKUIEditorialCardLayout : NSObject

{
    NSMutableArray *_allLockups;
    SKUILockupViewElement *_primaryLockup;
    struct CGSize _primaryLockupSize;
    double _secondaryLockupWidth;
}

@property (nonatomic, readonly) NSArray *allLockups;
@property (nonatomic, readonly) SKUILockupViewElement *primaryLockup;
@property (nonatomic, readonly) struct CGSize primaryLockupSize;
@property (nonatomic, readonly) double secondaryLockupWidth;

- (id)initWithCard:(id)arg1 width:(double)arg2 context:(id)arg3;

@end
