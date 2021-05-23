/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSString;

@interface INImageBundle : NSObject <Swift>

{
    NSString *_bundlePath;
    NSString *_bundleIdentifier;
    unsigned long long _bundleType;
}

@property (copy, nonatomic) NSString *bundlePath;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) unsigned long long bundleType;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
