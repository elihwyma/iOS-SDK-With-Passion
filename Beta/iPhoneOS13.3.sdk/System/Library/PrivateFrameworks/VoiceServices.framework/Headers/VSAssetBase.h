/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface VSAssetBase : NSObject

{
    NSString *_bundleIdentifier;
    NSNumber *_compatibilityVersion;
    NSNumber *_contentVersion;
    NSString *_masteredVersion;
}

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSNumber *compatibilityVersion;
@property (copy, nonatomic) NSNumber *contentVersion;
@property (copy, nonatomic) NSString *masteredVersion;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
