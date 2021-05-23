/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString;

@interface SAObjectSupport : AceObject <Swift>

@property (copy, nonatomic) NSString *aceVersion;
@property (copy, nonatomic) NSString *classId;
@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSArray *supportedProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)objectSupport;
+ (id)objectSupportWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
