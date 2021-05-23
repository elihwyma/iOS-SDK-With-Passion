/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface AVTColorDescription : NSObject

{
    NSMutableDictionary *_colors;
    NSMutableDictionary *_variationMin;
    NSMutableDictionary *_variationMax;
    NSDictionary *_color;
}

@property (readonly) NSDictionary *color;
@property (readonly) NSDictionary *variationsMin;
@property (readonly) NSDictionary *variationsMax;

- (id)initWithDescription:(id)arg1;
- (id)colors;

@end
