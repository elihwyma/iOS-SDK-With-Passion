/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString, SASyncAnchor;

@interface SASyncDebugInfo : AceObject <Swift>

@property (copy, nonatomic) NSArray *objectIds;
@property (retain, nonatomic) SASyncAnchor *syncAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)debugInfo;
+ (id)debugInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
