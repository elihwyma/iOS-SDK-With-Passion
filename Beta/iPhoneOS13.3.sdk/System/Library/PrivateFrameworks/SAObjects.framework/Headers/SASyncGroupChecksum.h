/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, SASyncAnchor;

@interface SASyncGroupChecksum : AceObject <Swift>

@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *domainObjectClass;
@property (copy, nonatomic) NSString *identifierChecksum;
@property (retain, nonatomic) SASyncAnchor *syncAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)groupChecksum;
+ (id)groupChecksumWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
