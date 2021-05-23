/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSOperation.h>

@class WBSSiteMetadataRequest;

@interface WBSSiteMetadataFetchOperation : NSOperation

{
    WBSSiteMetadataRequest *_request;
    long long _status;
}

@property (getter=_status, setter=_setStatus:) long long status;
@property (nonatomic, readonly) WBSSiteMetadataRequest *request;

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;

- (id)init;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (id)initWithRequest:(id)arg1;

@end
