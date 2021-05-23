/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSDate, NSString, NSURL;

@interface SAAnswerAbstractSocialPost : AceObject <Swift>

@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *authorTitle;
@property (copy, nonatomic) NSArray *comments;
@property (copy, nonatomic) NSDate *dateCreated;
@property (copy, nonatomic) NSDate *dateModified;
@property (copy, nonatomic) NSURL *icon;
@property (nonatomic) long long rank;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)abstractSocialPost;
+ (id)abstractSocialPostWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
