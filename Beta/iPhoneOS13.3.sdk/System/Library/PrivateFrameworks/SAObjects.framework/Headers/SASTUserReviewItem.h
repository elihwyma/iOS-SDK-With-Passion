/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, SAUIDecoratedText;

@interface SASTUserReviewItem : AceObject <Swift>

@property (retain, nonatomic) SAUIDecoratedText *reviewDate;
@property (retain, nonatomic) SAUIDecoratedText *reviewText;
@property (retain, nonatomic) SAUIDecoratedText *reviewer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)userReviewItem;
+ (id)userReviewItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
