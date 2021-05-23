/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUserActivity.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface SAClientUserActivity : SAUserActivity

@property (copy, nonatomic) NSArray *keywords;
@property (copy, nonatomic) NSArray *requiredUserInfoKeys;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSURL *webpageURL;

+ (id)clientUserActivity;
+ (id)clientUserActivityWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
