/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSNumber, NSString, NSURL;

@interface SASPronunciationContext : AceObject <Swift>

@property (copy, nonatomic) NSURL *domainObjectIdentifier;
@property (copy, nonatomic) NSString *domainObjectPropertyIdentifier;
@property (copy, nonatomic) NSString *fullName;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *orthography;
@property (copy, nonatomic) NSNumber *tokenOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)pronunciationContext;
+ (id)pronunciationContextWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
