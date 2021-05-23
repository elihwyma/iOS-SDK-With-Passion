/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString;

@interface SAMPSearchConstraint : AceObject <Swift>

@property (copy, nonatomic) NSArray *mediaPlayerOrderingTerms;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSArray *searchProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)searchConstraint;
+ (id)searchConstraintWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
