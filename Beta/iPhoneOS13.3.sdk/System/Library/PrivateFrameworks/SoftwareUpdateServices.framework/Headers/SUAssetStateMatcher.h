/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface SUAssetStateMatcher : NSObject

{
    NSString *_assetType;
    int _interestedStates;
    NSDictionary *_matcherInfo;
}

@property (nonatomic, readonly) NSString *assetType;
@property (nonatomic, readonly) int interestedStates;
@property (nonatomic, readonly) NSDictionary *matcherInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)_matchesFilterType:(id)arg1;
- (id)_findMatchFromCandidates:(id)arg1 error:(id *)arg2;
- (void)_modifyMADownloadOptions:(id)arg1;
- (id)findMatchFromCandidates:(id)arg1 error:(id *)arg2;
- (void)modifyMADownloadOptions:(id)arg1;
- (id)initWithType:(id)arg1 interestedStates:(int)arg2;

@end
