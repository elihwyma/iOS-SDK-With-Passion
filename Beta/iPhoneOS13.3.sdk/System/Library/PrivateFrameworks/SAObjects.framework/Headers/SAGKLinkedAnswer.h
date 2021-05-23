/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString, NSURL, SAUIAppPunchOut;

@interface SAGKLinkedAnswer : AceObject <Swift>

@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSString *displayLink;
@property (copy, nonatomic) NSURL *link;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SAUIAppPunchOut *punchOut;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSURL *searchUri;
@property (copy, nonatomic) NSArray *thumbnails;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)linkedAnswer;
+ (id)linkedAnswerWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
