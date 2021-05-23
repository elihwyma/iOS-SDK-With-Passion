/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKSource, NSDictionary, UIImage;

@interface HKSourceDataModel : NSObject

{
    _Bool _installed;
    HKSource *_source;
    UIImage *_icon;
    NSDictionary *_purposeStrings;
}

@property (copy, nonatomic, readonly) HKSource *source;
@property _Bool installed;
@property (retain) UIImage *icon;
@property (copy) NSDictionary *purposeStrings;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSource:(id)arg1;

@end
