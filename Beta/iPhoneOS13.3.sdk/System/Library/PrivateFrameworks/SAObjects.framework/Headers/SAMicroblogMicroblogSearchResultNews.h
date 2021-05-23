/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAMicroblogMicroblogSearchResultPost.h>

@class NSString, NSURL;

@interface SAMicroblogMicroblogSearchResultNews : SAMicroblogMicroblogSearchResultPost

@property (copy, nonatomic) NSURL *articleURL;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSString *title;

+ (id)microblogSearchResultNews;
+ (id)microblogSearchResultNewsWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
