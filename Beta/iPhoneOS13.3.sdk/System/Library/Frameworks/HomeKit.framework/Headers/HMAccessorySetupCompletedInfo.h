/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class NSArray;

@interface HMAccessorySetupCompletedInfo : NSObject <Swift>

{
    NSArray *_addedAccessoryUUIDs;
}

@property (retain, nonatomic) NSArray *addedAccessoryUUIDs;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccessoryList:(id)arg1;

@end
