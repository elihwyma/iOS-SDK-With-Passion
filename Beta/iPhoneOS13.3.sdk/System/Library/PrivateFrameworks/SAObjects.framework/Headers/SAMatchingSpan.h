/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, NSURL;

@interface SAMatchingSpan : AceObject <Swift>

@property (copy, nonatomic) NSURL *domainObjectIdentifier;
@property (nonatomic) long long endIndex;
@property (nonatomic) long long startIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)matchingSpan;
+ (id)matchingSpanWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
