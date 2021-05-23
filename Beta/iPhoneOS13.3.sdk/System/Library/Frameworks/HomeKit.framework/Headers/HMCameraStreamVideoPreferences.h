/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class NSSet;

@interface HMCameraStreamVideoPreferences : NSObject <Swift>

{
    NSSet *_resolutions;
}

@property (nonatomic, readonly) NSSet *resolutions;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResolutions:(id)arg1;

@end
