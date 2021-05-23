/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXAdResponse.h>

@class NSURL;

@protocol SXPrerollAdMetadata;

@interface SXPrerollAdResponse : SXAdResponse

{
    NSURL *_videoURL;
    double _skipDuration;
    id <SXPrerollAdMetadata> _prerollAdMetadata;
}

@property (retain, nonatomic) NSURL *videoURL;
@property (nonatomic) double skipDuration;
@property (retain, nonatomic) id <SXPrerollAdMetadata> prerollAdMetadata;

@end
