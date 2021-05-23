/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSString, NSURL;

@interface SALCMContent : SADomainObject

@property (copy, nonatomic) NSString *canonicalId;
@property (copy, nonatomic) NSString *channelId;
@property (copy, nonatomic) NSURL *externalId;
@property (copy, nonatomic) NSString *title;

+ (id)content;
+ (id)contentWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
