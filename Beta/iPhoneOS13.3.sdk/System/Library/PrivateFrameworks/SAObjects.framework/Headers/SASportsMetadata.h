/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSNumber, NSString;

@interface SASportsMetadata : AceObject <Swift>

@property (copy, nonatomic) NSNumber *average;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *selected;
@property (copy, nonatomic) NSString *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)metadata;
+ (id)metadataWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
