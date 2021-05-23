/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString;

@interface SASyncVerificationResult : AceObject <Swift>

@property (nonatomic) long long fail;
@property (copy, nonatomic) NSArray *failedObjectIds;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long total;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)verificationResult;
+ (id)verificationResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
