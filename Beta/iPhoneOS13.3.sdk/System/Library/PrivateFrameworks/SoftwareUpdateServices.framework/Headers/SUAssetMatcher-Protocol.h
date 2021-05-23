/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <SoftwareUpdateServices/Swift-Protocol.h>

@class NSDictionary, NSString;

@protocol SUAssetMatcher <Swift>

@property (nonatomic, readonly) NSString *assetType;
@property (nonatomic, readonly) NSDictionary *matcherInfo;

- (unsigned short)findMatchFromCandidates:error: /* Error: Ran out of types for this method. */;
- (unsigned short)modifyMADownloadOptions: /* Error: Ran out of types for this method. */;

@end
