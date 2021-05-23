/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSArray, NSError, NSOperationQueue, NSString;

@protocol OS_dispatch_queue;

@interface MPRequest : NSObject <Swift>

{
    NSString *_label;
    long long _qualityOfService;
    double _timeoutInterval;
    NSOperationQueue *_calloutQueue;
    NSError *_cancelationError;
    NSObject<OS_dispatch_queue> *_cleanupQueue;
    NSOperationQueue *_queue;
    NSArray *_middlewareClasses;
}

@property (nonatomic, readonly) NSOperationQueue *calloutQueue;
@property (nonatomic, readonly) NSError *cancelationError;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *cleanupQueue;
@property (nonatomic, readonly) NSOperationQueue *queue;
@property (copy, nonatomic) NSArray *middlewareClasses;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) double timeoutInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)responseClass;
+ (double)expectedMaximumResponseTimeInterval;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)cancel;
- (id)performWithCompletion:(CDUnknownBlockType)arg1;
- (id)_stateDumpObject;
- (void)prepareForResponseWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performWithCompletion:(CDUnknownBlockType)arg1;

@end
