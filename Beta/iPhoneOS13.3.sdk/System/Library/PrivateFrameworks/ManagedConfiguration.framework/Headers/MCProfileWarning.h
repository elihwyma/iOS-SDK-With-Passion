/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MCProfileWarning : NSObject

{
    NSString *_localizedTitle;
    NSString *_localizedBody;
    _Bool _isLongForm;
}

@property (retain, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) NSString *localizedBody;
@property (nonatomic) _Bool isLongForm;

+ (_Bool)supportsSecureCoding;
+ (id)warningWithLocalizedTitle:(id)arg1 localizedBody:(id)arg2 isLongForm:(_Bool)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalizedTitle:(id)arg1 localizedBody:(id)arg2 isLongForm:(_Bool)arg3;
- (_Bool)isEqualToProfileWarning:(id)arg1;

@end
