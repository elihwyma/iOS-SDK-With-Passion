/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSTip.h>

@class NSDictionary, NSString;

@interface TPSDiscoverabilityTip : TPSTip

{
    NSString *_hintText;
    NSString *_userLanguageCode;
    NSDictionary *_preconditions;
}

@property (copy, nonatomic) NSString *userLanguageCode;
@property (copy, nonatomic) NSDictionary *preconditions;
@property (copy, nonatomic) NSString *hintText;

+ (_Bool)supportsSecureCoding;
+ (id)classSet;
+ (id)_currentUserLanguageCode;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithDictionary:(id)arg1;

@end
