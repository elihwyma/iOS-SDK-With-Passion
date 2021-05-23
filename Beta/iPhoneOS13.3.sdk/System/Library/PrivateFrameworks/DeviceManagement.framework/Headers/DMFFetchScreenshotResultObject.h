/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <Catalyst/CATTaskResultObject.h>

@class NSData;

@interface DMFFetchScreenshotResultObject : CATTaskResultObject

{
    NSData *_screenshotData;
}

@property (nonatomic, readonly) NSData *screenshotData;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;

@end
