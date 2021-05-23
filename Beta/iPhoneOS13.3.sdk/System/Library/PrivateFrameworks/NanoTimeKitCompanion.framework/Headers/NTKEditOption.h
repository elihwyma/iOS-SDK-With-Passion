/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLKDevice, NSString;

@interface NTKEditOption : NSObject

{
    CLKDevice *_device;
}

@property (nonatomic, readonly) long long swatchStyle;
@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic, readonly) NSString *dailySnapshotKey;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *localizedNameForAction;

+ (_Bool)supportsSecureCoding;
+ (struct CGSize)sizeForSwatchStyle:(long long)arg1;
+ (id)optionsDescription;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)JSONObjectRepresentation;
- (_Bool)isValidOption;
- (_Bool)optionExistsInDevice:(id)arg1;
- (id)initWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2;

@end
