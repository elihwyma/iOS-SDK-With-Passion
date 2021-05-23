/*
 Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <HomeSharing/HSResponse.h>

@class NSArray;

@interface HSAuthorizedDSIDsUpdateResponse : HSResponse

{
    NSArray *authorizedDSIDs;
}

@property (copy, nonatomic) NSArray *authorizedDSIDs;

@end
