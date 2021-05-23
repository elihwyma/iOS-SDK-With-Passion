/*
 Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

#import <DuetExpertCenter/_DECAppItem.h>

@class NSString, NSURL;

@interface _DECLocationAppItem : _DECAppItem

{
    _Bool _directionsSupported;
    NSString *_name;
    NSString *_shortName;
    NSURL *_launchURL;
    NSString *_originatingBundleIdentifier;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *shortName;
@property (copy, nonatomic, readonly) NSURL *launchURL;
@property (copy, nonatomic, readonly) NSString *originatingBundleIdentifier;
@property (nonatomic, readonly) _Bool directionsSupported;

+ (_Bool)supportsSecureCoding;
+ (id)locationAppWithBundleIdentifier:(id)arg1 name:(id)arg2 shortName:(id)arg3 launchURL:(id)arg4 originatingBundleIdentifier:(id)arg5 directionsSupported:(_Bool)arg6 predictionSources:(long long)arg7;
+ (id)locationAppWithBundleIdentifier:(id)arg1 name:(id)arg2 shortName:(id)arg3 launchURL:(id)arg4 originatingBundleIdentifier:(id)arg5 directionsSupported:(_Bool)arg6;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEquivalent:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 name:(id)arg2 shortName:(id)arg3 launchURL:(id)arg4 originatingBundleIdentifier:(id)arg5 directionsSupported:(_Bool)arg6 predictionSources:(long long)arg7;
- (_Bool)_isEqualToDECLocationAppItem:(id)arg1;

@end
