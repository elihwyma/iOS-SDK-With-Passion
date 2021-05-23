/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface NACProxyVolumeControlTarget : NSObject

{
    NSNumber *_originIdentifier;
    NSString *_category;
}

@property (retain, nonatomic) NSNumber *originIdentifier;
@property (retain, nonatomic) NSString *category;
@property (nonatomic, readonly, getter=isPairedDevice) _Bool pairedDevice;

+ (_Bool)supportsSecureCoding;
+ (id)volumeControlTargetWithCategory:(id)arg1;
+ (id)volumeControlTargetWithOriginIdentifier:(id)arg1;
+ (_Bool)_isValidOriginIdentifier:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginIdentifier:(id)arg1 category:(id)arg2;

@end
