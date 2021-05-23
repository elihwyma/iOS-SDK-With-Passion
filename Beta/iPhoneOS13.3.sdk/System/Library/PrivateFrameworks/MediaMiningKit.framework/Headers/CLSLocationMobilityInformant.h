/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <MediaMiningKit/CLSInformant.h>

@interface CLSLocationMobilityInformant : CLSInformant

+ (id)classIdentifier;
+ (id)familyIdentifier;
+ (id)informantDependenciesIdentifiers;

- (id)gatherCluesForInvestigation:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)_locationMobilityClueForInvestigation:(id)arg1;

@end
