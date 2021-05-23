/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSDictionary, _UIStatusBarData, _UIStatusBarStyleAttributes;

__attribute__((visibility("hidden")))
@interface _UIStatusBarItemUpdate : NSObject <Swift>

{
    _Bool _enabilityChanged;
    _Bool _enabled;
    _Bool _dataChanged;
    _Bool _styleAttributesChanged;
    _UIStatusBarData *_data;
    _UIStatusBarStyleAttributes *_styleAttributes;
    NSDictionary *_placementInfo;
}

@property (nonatomic) _Bool enabilityChanged;
@property (nonatomic) _Bool enabled;
@property (nonatomic) _Bool dataChanged;
@property (retain, nonatomic) _UIStatusBarData *data;
@property (nonatomic) _Bool styleAttributesChanged;
@property (retain, nonatomic) _UIStatusBarStyleAttributes *styleAttributes;
@property (retain, nonatomic) NSDictionary *placementInfo;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
