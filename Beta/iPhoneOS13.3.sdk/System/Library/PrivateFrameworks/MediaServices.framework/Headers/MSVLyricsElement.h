/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <MediaServices/MSVLyricsXMLElement.h>

@class MSVLyricsAgent;

@interface MSVLyricsElement : MSVLyricsXMLElement

{
    long long _type;
    double _startTime;
    double _endTime;
    MSVLyricsAgent *_agent;
}

@property (nonatomic) long long type;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (retain, nonatomic) MSVLyricsAgent *agent;

+ (id)_descriptionForElementType:(long long)arg1;

- (id)description;

@end
