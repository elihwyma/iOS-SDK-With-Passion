/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class CLGeocoder, GeocodeRequest, NSMapTable, NSRecursiveLock, Reachability;

__attribute__((visibility("hidden")))
@interface QueuedGeocoder : NSObject

{
    double _placemarkDifferentationDistance;
    CLGeocoder *_geocoder;
    NSMapTable *_locationToPlacemarksMap;
    NSMapTable *_locationToResultMap;
    GeocodeRequest *_currentRequest;
    Reachability *_reachability;
    NSRecursiveLock *_lock;
}

@property (retain, nonatomic) CLGeocoder *geocoder;
@property (retain, nonatomic) NSMapTable *locationToPlacemarksMap;
@property (retain, nonatomic) NSMapTable *locationToResultMap;
@property (retain, nonatomic) GeocodeRequest *currentRequest;
@property (retain, nonatomic) Reachability *reachability;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (nonatomic) double placemarkDifferentationDistance;

+ (id)sharedGeocoder;

- (id)init;
- (id)_init;
- (void)reverseGeocodeLocation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dequeueRequest;

@end
