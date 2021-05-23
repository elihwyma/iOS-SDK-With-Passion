/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPAVItem.h>

@class NSData, NSNumber, NSString;

@protocol MPCReportingIdentityPropertiesLoading;

@interface MPAVItem (MPCReportingAdditions)

@property (nonatomic, readonly) id <MPCReportingIdentityPropertiesLoading> mpcReporting_identityPropertiesLoader;
@property (nonatomic, readonly) long long mpcReporting_equivalencySourceAdamID;
@property (nonatomic, readonly) _Bool mpcReporting_isValidReportingItem;
@property (copy, nonatomic, readonly) NSData *mpcReporting_jingleTimedMetadata;
@property (copy, nonatomic, readonly) NSNumber *mpcReporting_privateListeningEnabled;
@property (copy, nonatomic, readonly) NSString *mpcReporting_requestingBundleIdentifier;
@property (copy, nonatomic, readonly) NSString *mpcReporting_requestingBundleVersion;
@property (nonatomic, readonly) _Bool mpcReporting_shouldReportPlayEventsToStore;
@property (nonatomic, readonly) _Bool mpcReporting_shouldUseRelativeTimePositions;
@property (copy, nonatomic, readonly) NSNumber *mpcReporting_siriInitiated;
@property (copy, nonatomic, readonly) NSData *mpcReporting_trackInfo;
@property (nonatomic, readonly) unsigned long long mpcReporting_itemType;

@end
