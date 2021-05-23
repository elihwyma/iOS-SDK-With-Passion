/*
 Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PCSAccountManager : NSObject

{
    NSString *_dsid;
}

@property (retain) NSString *dsid;

- (unsigned long long)accountStatus;
- (id)initWithDSID:(id)arg1;

@end
