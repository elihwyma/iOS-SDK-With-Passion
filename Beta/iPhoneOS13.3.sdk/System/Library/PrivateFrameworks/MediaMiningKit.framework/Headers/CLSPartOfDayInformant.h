/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <MediaMiningKit/CLSInformant.h>

@interface CLSPartOfDayInformant : CLSInformant

+ (id)classIdentifier;
+ (id)familyIdentifier;
+ (id)informantDependenciesIdentifiers;

- (id)gatherCluesForInvestigation:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;

@end
