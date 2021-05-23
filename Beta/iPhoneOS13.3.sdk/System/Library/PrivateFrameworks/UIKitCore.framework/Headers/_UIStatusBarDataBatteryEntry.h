/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarDataEntry.h>

@class NSString;

@interface _UIStatusBarDataBatteryEntry : _UIStatusBarDataEntry

{
    _Bool _saverModeActive;
    _Bool _prominentlyShowsDetailString;
    long long _capacity;
    long long _state;
    NSString *_detailString;
}

@property (nonatomic) long long capacity;
@property (nonatomic) long long state;
@property (nonatomic) _Bool saverModeActive;
@property (nonatomic) _Bool prominentlyShowsDetailString;
@property (copy, nonatomic) NSString *detailString;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_ui_descriptionBuilder;

@end
