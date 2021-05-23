/*
 Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

#import <Foundation/NSObject.h>

@class BCOAuth2Parameters, NSString;

@interface BCAuthenticationRequest : NSObject

{
    NSString *_businessIdentifier;
    NSString *_businessName;
    BCOAuth2Parameters *_oauth2;
}

@property (retain, nonatomic) NSString *businessIdentifier;
@property (retain, nonatomic) BCOAuth2Parameters *oauth2;
@property (nonatomic, readonly) NSString *businessName;

+ (_Bool)supportsSecureCoding;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 imageDictionary:(id)arg2;

@end
