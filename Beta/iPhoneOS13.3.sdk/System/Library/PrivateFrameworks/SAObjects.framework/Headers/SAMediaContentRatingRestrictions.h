/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString;

@interface SAMediaContentRatingRestrictions : AceObject <Swift>

@property (nonatomic) long long appRestriction;
@property (copy, nonatomic) NSString *countryCode;
@property (nonatomic) long long movieRestriction;
@property (nonatomic) long long tvRestriction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)mediaContentRatingRestrictions;
+ (id)mediaContentRatingRestrictionsWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
