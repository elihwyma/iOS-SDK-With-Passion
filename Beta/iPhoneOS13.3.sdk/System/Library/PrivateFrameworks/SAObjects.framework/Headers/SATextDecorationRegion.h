/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSNumber, NSString;

@interface SATextDecorationRegion : AceObject <Swift>

@property (copy, nonatomic) NSNumber *length;
@property (copy, nonatomic) NSString *property;
@property (copy, nonatomic) NSNumber *start;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)textDecorationRegion;
+ (id)textDecorationRegionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
