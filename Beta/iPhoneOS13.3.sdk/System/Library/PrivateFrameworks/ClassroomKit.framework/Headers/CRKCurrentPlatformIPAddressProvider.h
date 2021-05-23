/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CRKIPAddressProviding;

@interface CRKCurrentPlatformIPAddressProvider : NSObject

{
    id <CRKIPAddressProviding> _baseProvider;
}

@property (nonatomic, readonly) id <CRKIPAddressProviding> baseProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *IPAddress;

+ (id)keyPathsForValuesAffectingIPAddress;

- (id)init;
- (id)makeProviderForCurrentPlatform;

@end
