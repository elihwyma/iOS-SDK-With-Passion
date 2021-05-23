/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBBestAppSuggestion.h>

@class NSString, NSUUID;

@interface SBPPTFakeAppSuggestion : SBBestAppSuggestion

{
    NSUUID *_uuid;
    NSString *_bundleIdentifier;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)bundleIdentifier;
- (id)activityType;
- (id)uniqueIdentifier;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)originatingDeviceType;
- (id)originatingDeviceName;
- (id)suggestedLocationName;

@end
