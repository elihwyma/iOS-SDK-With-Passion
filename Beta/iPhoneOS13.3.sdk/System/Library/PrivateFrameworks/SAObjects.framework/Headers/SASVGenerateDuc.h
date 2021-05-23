/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface SASVGenerateDuc : AceObject <Swift>

@property (copy, nonatomic) NSString *ducFamilyId;
@property (copy, nonatomic) NSString *ducId;
@property (copy, nonatomic) NSDictionary *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)generateDuc;
+ (id)generateDucWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
