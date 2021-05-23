/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TPSSubscriptionLabel : NSObject

{
    NSString *_localizedBadgeLabel;
    NSString *_localizedLongLabel;
    NSString *_unlocalizedLongLabel;
}

@property (nonatomic, readonly) NSString *localizedBadgeLabel;
@property (nonatomic, readonly) NSString *localizedLongLabel;
@property (nonatomic, readonly) NSString *unlocalizedLongLabel;

+ (id)labelsFromUnlocalizedLabels:(id)arg1 localizedLongLabels:(id)arg2 localizedBadgeLabels:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithUnlocalizedLabel:(id)arg1 localizedLongLabel:(id)arg2 localizedBadgeLabel:(id)arg3;
- (_Bool)isEqualToSubscriptionLabel:(id)arg1;

@end
