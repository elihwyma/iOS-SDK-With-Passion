/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@interface NTKUpNextComplicationConfiguration : NSObject

{
    long long _family;
}

@property (nonatomic, readonly) long long family;

+ (_Bool)supportsSecureCoding;
+ (id)bezelConfigurationWithMaskImage:(id)arg1 radius:(double)arg2;
+ (id)graphicRectangularConfiguration;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFamily:(long long)arg1;
- (id)_newPickerView;

@end
