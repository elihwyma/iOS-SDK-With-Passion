/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString;

@interface SAUITemplateEdgeInsets : AceObject <Swift>

@property (nonatomic) float bottom;
@property (nonatomic) float left;
@property (nonatomic) float right;
@property (nonatomic) float top;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)edgeInsets;
+ (id)edgeInsetsWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
