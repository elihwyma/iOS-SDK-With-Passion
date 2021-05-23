/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@protocol SFCompanionAdvertiserDelegate;

@interface SFCompanionAdvertiser : NSObject

{
    _Bool _supportsStreams;
    id <SFCompanionAdvertiserDelegate> _delegate;
    NSString *_serviceType;
}

@property id <SFCompanionAdvertiserDelegate> delegate;
@property _Bool supportsStreams;
@property (copy, readonly) NSString *serviceType;
@property (readonly) NSData *serviceEndpointData;

- (void)dealloc;
- (void)stop;
- (void)start;
- (id)initWithServiceType:(id)arg1;
- (void)getContinuationStreamsWithEndpointData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
