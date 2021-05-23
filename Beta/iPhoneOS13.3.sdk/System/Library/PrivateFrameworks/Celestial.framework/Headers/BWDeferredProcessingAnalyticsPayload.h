/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSString;

@interface BWDeferredProcessingAnalyticsPayload : NSObject

{
    int _error;
    int _processingType;
    _Bool _fileBacked;
    unsigned int _containerAgeInSeconds;
    unsigned long long _containerSizeInBytes;
    _Bool _interactiveQoS;
    unsigned int _graphPrepareDurationInMilliseconds;
    unsigned int _jobDurationInMilliseconds;
}

@property (nonatomic) int error;
@property (nonatomic) int processingType;
@property (nonatomic) _Bool fileBacked;
@property (nonatomic) unsigned int containerAgeInSeconds;
@property (nonatomic) unsigned long long containerSizeInBytes;
@property (nonatomic) _Bool interactiveQoS;
@property (nonatomic) unsigned int graphPrepareDurationInMilliseconds;
@property (nonatomic) unsigned int jobDurationInMilliseconds;
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
