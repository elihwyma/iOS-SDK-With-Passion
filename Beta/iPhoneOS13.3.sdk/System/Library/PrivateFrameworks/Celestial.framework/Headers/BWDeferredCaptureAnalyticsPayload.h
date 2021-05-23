/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSString;

@interface BWDeferredCaptureAnalyticsPayload : NSObject

{
    int _error;
    int _processingType;
    _Bool _fileBacked;
    unsigned int _commitDurationInMilliseconds;
    unsigned int _flushDurationInMilliseconds;
}

@property (nonatomic) int error;
@property (nonatomic) int processingType;
@property (nonatomic) _Bool fileBacked;
@property (nonatomic) unsigned int commitDurationInMilliseconds;
@property (nonatomic) unsigned int flushDurationInMilliseconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)reset;
- (id)eventName;
- (id)eventDictionary;

@end
