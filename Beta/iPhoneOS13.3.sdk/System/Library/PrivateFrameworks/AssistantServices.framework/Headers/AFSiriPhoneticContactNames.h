/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AFSiriPhoneticContactNames : NSObject

{
    NSString *_givenName;
    NSString *_middleName;
    NSString *_familyName;
    NSString *_nickname;
    NSString *_organizationName;
    NSString *_languageCode;
}

@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *middleName;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *organizationName;
@property (copy, nonatomic) NSString *languageCode;

- (id)spokenName;

@end
