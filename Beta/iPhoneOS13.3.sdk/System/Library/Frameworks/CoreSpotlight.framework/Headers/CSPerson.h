/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CSPerson : NSObject

{
    NSString *_displayName;
    NSArray *_handles;
    NSString *_handleIdentifier;
    NSString *_contactIdentifier;
}

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSArray *handles;
@property (retain, nonatomic) NSString *handleIdentifier;
@property (copy) NSString *contactIdentifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayName:(id)arg1 handles:(id)arg2 handleIdentifier:(id)arg3;
- (void)encodeWithCSCoder:(id)arg1;

@end
