/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NEVPNAppRuleExecutable : NSObject

{
    NSString *_matchSigningIdentifier;
    NSString *_matchDesignatedRequirement;
    NSString *_matchPath;
}

@property (readonly) NSString *matchSigningIdentifier;
@property (readonly) NSString *matchDesignatedRequirement;
@property (copy) NSString *matchPath;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
