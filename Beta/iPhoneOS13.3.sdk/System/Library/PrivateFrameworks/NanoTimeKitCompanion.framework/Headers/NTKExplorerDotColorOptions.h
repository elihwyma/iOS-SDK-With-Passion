/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface NTKExplorerDotColorOptions : NSObject

{
    UIColor *_connectedDotColor;
    UIColor *_connectedDotBackgroundColor;
    UIColor *_noServiceDotColor;
}

@property (retain, nonatomic) UIColor *connectedDotColor;
@property (retain, nonatomic) UIColor *connectedDotBackgroundColor;
@property (retain, nonatomic) UIColor *noServiceDotColor;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
