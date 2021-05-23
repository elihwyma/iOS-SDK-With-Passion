/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPModelPlayEvent, MPModelSong, NSData, NSString;

@interface MPCReportingLyricsViewEvent : NSObject

{
    MPModelSong *_modelSong;
    MPModelPlayEvent *_modelPlayEvent;
    NSString *_lyricsID;
    double _visibleDuration;
    long long _displayType;
    long long _displayedCharacterCount;
    NSString *_language;
    NSString *_featureName;
    NSData *_recommendationData;
    long long _sourceType;
}

@property (retain, nonatomic) MPModelSong *modelSong;
@property (retain, nonatomic) MPModelPlayEvent *modelPlayEvent;
@property (retain, nonatomic) NSString *lyricsID;
@property (nonatomic) double visibleDuration;
@property (nonatomic) long long displayType;
@property (nonatomic) long long displayedCharacterCount;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *featureName;
@property (copy, nonatomic) NSData *recommendationData;
@property (nonatomic) long long sourceType;

@end
