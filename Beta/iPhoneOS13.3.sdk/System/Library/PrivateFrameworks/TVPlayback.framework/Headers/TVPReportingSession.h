/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class RTCReporting;

@protocol TVPMediaItem;

@interface TVPReportingSession : NSObject

{
    NSObject<TVPMediaItem> *_mediaItem;
    RTCReporting *_reporter;
}

@property (retain, nonatomic) NSObject<TVPMediaItem> *mediaItem;
@property (retain, nonatomic) RTCReporting *reporter;

+ (void)initialize;

- (id)initWithMediaItem:(id)arg1;
- (void)_sendEvent:(id)arg1 withCategory:(unsigned short)arg2 type:(unsigned short)arg3 values:(id)arg4;
- (void)reportDownloadFinishedWithResult:(long long)arg1 error:(id)arg2;

@end
