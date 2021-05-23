/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarDataNetworkEntry.h>

@class NSString;

@interface _UIStatusBarDataCellularEntry : _UIStatusBarDataNetworkEntry

{
    _Bool _wifiCallingEnabled;
    _Bool _callForwardingEnabled;
    _Bool _showsSOSWhenDisabled;
    long long _type;
    NSString *_string;
    NSString *_crossfadeString;
    NSString *_badgeString;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *string;
@property (copy, nonatomic) NSString *crossfadeString;
@property (copy, nonatomic) NSString *badgeString;
@property (nonatomic) _Bool wifiCallingEnabled;
@property (nonatomic) _Bool callForwardingEnabled;
@property (nonatomic) _Bool showsSOSWhenDisabled;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_ui_descriptionBuilder;

@end
