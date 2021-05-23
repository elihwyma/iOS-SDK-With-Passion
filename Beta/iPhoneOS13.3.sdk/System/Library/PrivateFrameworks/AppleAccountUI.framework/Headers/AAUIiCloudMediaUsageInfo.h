/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor;

@interface AAUIiCloudMediaUsageInfo : NSObject

{
    float _bytesUsed;
    NSString *_mediaType;
    UIColor *_representativeColor;
    NSString *_displayLabel;
}

@property (retain, nonatomic) NSString *mediaType;
@property (retain, nonatomic) UIColor *representativeColor;
@property (nonatomic) float bytesUsed;
@property (retain, nonatomic) NSString *displayLabel;

- (id)initWithMediaType:(id)arg1 representativeColor:(id)arg2 bytesUsed:(float)arg3;
- (id)capacityBarCatagory;

@end
