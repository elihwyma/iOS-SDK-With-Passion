/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SACFPEXQuery : SABaseClientBoundCommand <Swift>

@property (copy, nonatomic) NSArray *criteriaFields;
@property (copy, nonatomic) NSString *criteriaSemanticTag;
@property (copy, nonatomic) NSString *criteriaSubType;
@property (copy, nonatomic) NSString *criteriaTimeType;
@property (copy, nonatomic) NSString *criteriaType;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *localeIdentifier;
@property (copy, nonatomic) NSArray *people;
@property (nonatomic) long long queryLimit;
@property (copy, nonatomic) NSNumber *queryTimeOut;
@property (copy, nonatomic) NSArray *recipients;
@property (copy, nonatomic) NSString *socialLabelType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)query;
+ (id)queryWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
