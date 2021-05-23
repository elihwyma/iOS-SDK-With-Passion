/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSData, NSDictionary, NSNumber, NSString;

@interface SASVoiceSearchResult : AceObject <Swift>

@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSData *result;
@property (copy, nonatomic) NSString *searchType;
@property (copy, nonatomic) NSNumber *statusCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)voiceSearchResult;
+ (id)voiceSearchResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
