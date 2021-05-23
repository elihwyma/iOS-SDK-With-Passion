/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString;

@interface SANPVideoLanguageOption : AceObject <Swift>

@property (copy, nonatomic) NSArray *characteristics;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *languageTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)languageOption;
+ (id)languageOptionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
