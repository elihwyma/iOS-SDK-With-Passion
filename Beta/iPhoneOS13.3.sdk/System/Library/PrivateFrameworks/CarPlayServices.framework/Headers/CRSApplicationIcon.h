/*
 Image: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface CRSApplicationIcon : NSObject

{
    NSString *_bundleIdentifier;
    NSData *_iconImageData;
    double _iconImageScale;
    NSString *_localizedDisplayName;
}

@property (retain, nonatomic) NSData *iconImageData;
@property (nonatomic) double iconImageScale;
@property (retain, nonatomic) NSString *localizedDisplayName;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;

@end
