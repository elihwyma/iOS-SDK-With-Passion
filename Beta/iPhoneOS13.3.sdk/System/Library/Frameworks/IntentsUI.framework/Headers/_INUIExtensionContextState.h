/*
 Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
 */

#import <Foundation/NSObject.h>

#import <IntentsUI/Swift-Protocol.h>

@class NSArray, NSDictionary;

@interface _INUIExtensionContextState : NSObject <Swift>

{
    NSDictionary *_hostedViewMinimumAllowedSizes;
    NSDictionary *_hostedViewMaximumAllowedSizes;
    NSArray *_interfaceSections;
}

@property (copy, nonatomic) NSDictionary *hostedViewMinimumAllowedSizes;
@property (copy, nonatomic) NSDictionary *hostedViewMaximumAllowedSizes;
@property (copy, nonatomic) NSArray *interfaceSections;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
