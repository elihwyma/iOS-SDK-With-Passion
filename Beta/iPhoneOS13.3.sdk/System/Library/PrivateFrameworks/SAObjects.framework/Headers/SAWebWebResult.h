/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, NSURL;

@interface SAWebWebResult : AceObject <Swift>

@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)webResult;
+ (id)webResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
