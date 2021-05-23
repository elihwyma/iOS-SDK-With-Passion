/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSDate, NSString;

@interface SASBootstrapSpeechIdMetadata : AceObject <Swift>

@property (copy, nonatomic) NSString *bootstrapSpeechId;
@property (copy, nonatomic) NSString *deviceType;
@property (copy, nonatomic) NSDate *keychainCreationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)bootstrapSpeechIdMetadata;
+ (id)bootstrapSpeechIdMetadataWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
