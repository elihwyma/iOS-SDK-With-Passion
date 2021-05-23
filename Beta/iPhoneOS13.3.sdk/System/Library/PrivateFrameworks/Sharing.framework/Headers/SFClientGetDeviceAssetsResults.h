/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SFClientGetDeviceAssetsResults : NSObject

{
    NSString *_assetBundlePath;
}

@property (copy, nonatomic) NSString *assetBundlePath;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
