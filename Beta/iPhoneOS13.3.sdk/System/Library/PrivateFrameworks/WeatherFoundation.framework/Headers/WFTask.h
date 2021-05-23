/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@class NSProgress, WFTaskIdentifier;

@interface WFTask : NSObject

{
    _Bool _requiresResponse;
    WFTaskIdentifier *_identifier;
    NSProgress *_progress;
}

@property (nonatomic, readonly) WFTaskIdentifier *identifier;
@property (nonatomic, readonly) _Bool requiresResponse;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic, readonly) _Bool isCancelled;

+ (id)sharedServiceConnection;

- (id)init;
- (void)cancel;
- (void)start;
- (void)cleanup;
- (void)executeSynchronously;
- (id)initWithResponseRequired:(_Bool)arg1;
- (void)handleResponse:(id)arg1;
- (void)startWithService:(id)arg1;
- (void)handleCancellation;

@end
