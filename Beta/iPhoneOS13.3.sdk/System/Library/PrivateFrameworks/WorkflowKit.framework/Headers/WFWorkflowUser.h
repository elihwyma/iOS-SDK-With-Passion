/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/MTLModel.h>

@class NSDate, NSDictionary, NSNumber, NSString, NSURL, NSUUID;

@interface WFWorkflowUser : MTLModel

{
    NSUUID *_identifier;
    NSString *_email;
    NSString *_fullName;
    NSString *_twitter;
    NSURL *_websiteURL;
    NSURL *_profileImageURL;
    NSDate *_dateJoined;
    NSNumber *_isAdmin;
    long long _mainIdentity;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSString *email;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) NSString *twitter;
@property (nonatomic, readonly) NSURL *websiteURL;
@property (nonatomic, readonly) NSURL *profileImageURL;
@property (nonatomic, readonly) NSDate *dateJoined;
@property (nonatomic, readonly) NSNumber *isAdmin;
@property (nonatomic, readonly) long long mainIdentity;
@property (nonatomic, readonly) NSString *websiteDisplayName;
@property (nonatomic, readonly) NSString *twitterDisplayName;
@property (nonatomic, readonly) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)mainIdentityJSONTransformer;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
