/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class NSDictionary;

@interface CRKIdentityServiceFetchCertificatesResultObject : CATTaskResultObject

{
    NSDictionary *_certificatesByPersonLinkID;
}

@property (copy, nonatomic) NSDictionary *certificatesByPersonLinkID;

@end
