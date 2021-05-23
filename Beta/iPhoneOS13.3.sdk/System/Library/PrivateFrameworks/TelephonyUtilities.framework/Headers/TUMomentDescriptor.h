/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@class NSString, NSURL;

@interface TUMomentDescriptor : NSObject <Swift>

{
    NSString *_photosAssetIdentifier;
}

@property (nonatomic, readonly) NSURL *photoViewingAppURL;
@property (copy, nonatomic, readonly) NSString *photosAssetIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhotosAppAssetIdentifier:(id)arg1;

@end
