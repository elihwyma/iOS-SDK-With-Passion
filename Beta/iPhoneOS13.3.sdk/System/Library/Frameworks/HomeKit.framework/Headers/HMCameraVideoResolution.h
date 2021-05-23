/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@interface HMCameraVideoResolution : NSObject <Swift>

{
    unsigned long long _videoResolution;
}

@property (nonatomic, readonly) unsigned long long videoResolution;

+ (_Bool)supportsSecureCoding;
+ (_Bool)isValid:(unsigned long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideoResolutionType:(unsigned long long)arg1;

@end
