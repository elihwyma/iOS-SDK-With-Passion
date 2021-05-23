/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <ClockKit/CLKImageProvider.h>

@class NSString, UIImage;

@interface NTKPeopleComplicationImageProvider : CLKImageProvider

{
    double _borderWidth;
    double _fontSize;
    UIImage *_profileImage;
    NSString *_fullName;
    NSString *_nameAbbreviation;
}

@property double borderWidth;
@property double fontSize;
@property (retain, nonatomic) UIImage *profileImage;
@property (retain, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSString *nameAbbreviation;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
