/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class NSArray;

@interface CRKIdentityServiceFetchCertificatesRequest : CATTaskRequest

{
    NSArray *_personLinkIDs;
}

@property (copy, nonatomic) NSArray *personLinkIDs;

@end
