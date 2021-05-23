/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface SAOperation : AceObject <Swift>

@property (copy, nonatomic) NSDictionary *constraints;
@property (copy, nonatomic) NSString *domainId;
@property (copy, nonatomic) NSString *operationId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)operation;
+ (id)operationWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
