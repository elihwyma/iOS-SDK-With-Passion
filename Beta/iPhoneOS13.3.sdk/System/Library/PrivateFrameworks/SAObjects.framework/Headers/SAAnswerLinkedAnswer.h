/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, NSURL;

@interface SAAnswerLinkedAnswer : AceObject <Swift>

@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSURL *image;
@property (copy, nonatomic) NSURL *link;
@property (copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)linkedAnswer;
+ (id)linkedAnswerWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
