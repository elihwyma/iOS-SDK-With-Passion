/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseAceObject.h>

@class NSDictionary, NSString, NSURL;

@interface SACFScriptUrlInformation : SABaseAceObject

@property (copy, nonatomic) NSURL *downloadUrl;
@property (copy, nonatomic) NSDictionary *headerFields;
@property (copy, nonatomic) NSString *requestMethodType;

+ (id)scriptUrlInformation;
+ (id)scriptUrlInformationWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
