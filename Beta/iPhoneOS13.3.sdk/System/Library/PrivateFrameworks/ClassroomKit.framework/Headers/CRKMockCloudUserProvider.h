/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class CRKCloudUser, NSString;

@interface CRKMockCloudUserProvider : NSObject

{
    CRKCloudUser *_cloudUser;
}

@property (retain, nonatomic) CRKCloudUser *cloudUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)providerWithUser:(id)arg1;

@end
