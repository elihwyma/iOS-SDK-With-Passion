/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFWorkflowUser.h>

@class NSString, NSURL;

@interface WFMutableWorkflowUser : WFWorkflowUser

{
    NSString *email;
    NSString *fullName;
    NSString *twitter;
    NSURL *websiteURL;
    NSURL *profileImageURL;
    long long mainIdentity;
}

@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSString *fullName;
@property (copy, nonatomic) NSString *twitter;
@property (retain, nonatomic) NSURL *websiteURL;
@property (retain, nonatomic) NSURL *profileImageURL;
@property (nonatomic) long long mainIdentity;

@end
