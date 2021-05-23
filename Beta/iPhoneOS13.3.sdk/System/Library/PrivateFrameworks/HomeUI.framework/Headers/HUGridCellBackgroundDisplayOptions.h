/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

#import <HomeUI/Swift-Protocol.h>

@class NSString, UIVisualEffect;

@interface HUGridCellBackgroundDisplayOptions : NSObject <Swift>

{
    unsigned long long _contentColorStyle;
    unsigned long long _displayStyle;
    UIVisualEffect *_backgroundVisualEffect;
}

@property (nonatomic) unsigned long long displayStyle;
@property (retain, nonatomic) UIVisualEffect *backgroundVisualEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long contentColorStyle;

+ (id)defaultOptions;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
