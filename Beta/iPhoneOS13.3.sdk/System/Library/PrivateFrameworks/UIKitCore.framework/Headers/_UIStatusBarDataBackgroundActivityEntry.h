/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarDataEntry.h>

@class NSString;

@interface _UIStatusBarDataBackgroundActivityEntry : _UIStatusBarDataEntry

{
    long long _type;
    double _displayStartDate;
    NSString *_detailString;
}

@property (nonatomic) long long type;
@property (nonatomic) double displayStartDate;
@property (copy, nonatomic) NSString *detailString;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_ui_descriptionBuilder;

@end
