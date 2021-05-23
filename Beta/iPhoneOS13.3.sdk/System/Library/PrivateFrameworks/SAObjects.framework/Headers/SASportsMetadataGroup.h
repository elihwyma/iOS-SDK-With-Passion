/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SASportsMetadataGroup : AceObject <Swift>

@property (copy, nonatomic) NSString *groupTitle;
@property (copy, nonatomic) NSArray *metadata;
@property (copy, nonatomic) NSNumber *selected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)metadataGroup;
+ (id)metadataGroupWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
