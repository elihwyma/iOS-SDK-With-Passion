/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class TVPPlaybackReportingEventCollection;

@protocol TVPSecureKeyLoaderDelegate;

@interface TVPSecureKeyLoader : NSObject

{
    id <TVPSecureKeyLoaderDelegate> _delegate;
    TVPPlaybackReportingEventCollection *_eventCollection;
}

@property (weak, nonatomic) id <TVPSecureKeyLoaderDelegate> delegate;
@property (retain, nonatomic) TVPPlaybackReportingEventCollection *eventCollection;

- (void)startLoadingCertificateDataForRequest:(id)arg1;
- (void)startLoadingContentIdentifierDataForRequest:(id)arg1;
- (void)startLoadingKeyResponseDataForRequest:(id)arg1;
- (void)sendStopRequest;

@end
