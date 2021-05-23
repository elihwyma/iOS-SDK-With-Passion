/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKLocalSearchRequest;

@protocol MKMapServiceTicket;

@interface MKLocalSearch : NSObject

{
    MKLocalSearchRequest *_request;
    id <MKMapServiceTicket> _ticket;
}

@property (nonatomic, readonly, getter=isSearching) _Bool searching;

- (id)init;
- (void)cancel;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithRequest:(id)arg1;
- (void)_phoneOnlyStartWithCompletionHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)_handleMapItems:(id)arg1 boundingRegion:(id)arg2 error:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4 queue:(id)arg5;
- (void)_startWithCompletionHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;

@end
