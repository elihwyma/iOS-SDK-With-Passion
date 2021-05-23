/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString;

@interface SAIntentGroupIntentSearchMetadata : AceObject <Swift>

@property (copy, nonatomic) NSString *jsonData;
@property (copy, nonatomic) NSString *metadataType;
@property (nonatomic) long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)intentSearchMetadata;
+ (id)intentSearchMetadataWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
