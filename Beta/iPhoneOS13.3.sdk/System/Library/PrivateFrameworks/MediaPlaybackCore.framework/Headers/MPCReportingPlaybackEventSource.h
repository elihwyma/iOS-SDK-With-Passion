/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPModelGenericObject, MPModelPlayEvent, NSData, NSNumber, NSString;

@protocol MPCReportingIdentityPropertiesLoading;

@interface MPCReportingPlaybackEventSource : NSObject

{
    _Bool _shouldReportPlayEventsToStore;
    id <MPCReportingIdentityPropertiesLoading> _identityPropertiesLoader;
    long long _equivalencySourceAdamID;
    double _eventDuration;
    unsigned long long _overrideItemType;
    NSString *_lyricsID;
    MPModelGenericObject *_itemGenericObject;
    NSNumber *_privateListeningEnabled;
    NSNumber *_siriInitiated;
    NSData *_trackInfo;
    MPModelPlayEvent *_modelPlayEvent;
    NSString *_featureName;
    NSData *_jingleTimedMetadata;
    NSData *_recommendationData;
    NSString *_requestingBundleIdentifier;
    NSString *_requestingBundleVersion;
}

@property (retain, nonatomic) id <MPCReportingIdentityPropertiesLoading> identityPropertiesLoader;
@property (nonatomic) long long equivalencySourceAdamID;
@property (nonatomic) double eventDuration;
@property (nonatomic) unsigned long long overrideItemType;
@property (copy, nonatomic) NSString *lyricsID;
@property (retain, nonatomic) MPModelGenericObject *itemGenericObject;
@property (copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled;
@property (copy, nonatomic, getter=isSiriInitiated) NSNumber *siriInitiated;
@property (nonatomic) _Bool shouldReportPlayEventsToStore;
@property (copy, nonatomic) NSData *trackInfo;
@property (retain, nonatomic) MPModelPlayEvent *modelPlayEvent;
@property (copy, nonatomic) NSString *featureName;
@property (copy, nonatomic) NSData *jingleTimedMetadata;
@property (copy, nonatomic) NSData *recommendationData;
@property (copy, nonatomic) NSString *requestingBundleIdentifier;
@property (copy, nonatomic) NSString *requestingBundleVersion;

- (id)init;
- (id)initWithAVItem:(id)arg1;

@end
