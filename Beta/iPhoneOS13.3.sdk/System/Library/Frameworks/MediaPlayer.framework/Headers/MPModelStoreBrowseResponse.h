/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelResponse.h>

@class MPChangeDetails, MPModelStoreBrowseResponseParser;

@interface MPModelStoreBrowseResponse : MPModelResponse

{
    MPChangeDetails *_changeDetails;
    MPModelStoreBrowseResponseParser *_parser;
}

@property (retain, nonatomic) MPModelStoreBrowseResponseParser *parser;
@property (retain, nonatomic) MPChangeDetails *changeDetails;
@property (nonatomic, readonly) _Bool hasAdditionalContentItems;

@end
