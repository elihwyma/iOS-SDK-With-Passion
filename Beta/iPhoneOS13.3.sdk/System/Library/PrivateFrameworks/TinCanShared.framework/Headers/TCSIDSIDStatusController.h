/*
 Image: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
 */

#import <Foundation/NSObject.h>

@class IDSBatchIDQueryController, NSArray, NSMutableDictionary, NSNumber, NSString;

@protocol OS_dispatch_source, TCSIDSIDStatusControllerDelegate, TUIDSLookup;

@interface TCSIDSIDStatusController : NSObject

{
    NSObject<OS_dispatch_source> *_timer;
    double _timeout;
    id <TUIDSLookup> _item;
    id <TCSIDSIDStatusControllerDelegate> _delegate;
    IDSBatchIDQueryController *_queryController;
    NSArray *_destinations;
    NSMutableDictionary *_destinationToStatus;
}

@property (retain, nonatomic) IDSBatchIDQueryController *queryController;
@property (nonatomic, readonly) NSArray *destinations;
@property (nonatomic, readonly) NSMutableDictionary *destinationToStatus;
@property (nonatomic, readonly) id <TUIDSLookup> item;
@property (nonatomic, readonly) NSNumber *status;
@property (nonatomic, readonly) NSString *tinCanHandle;
@property (weak, nonatomic, readonly) id <TCSIDSIDStatusControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)stringForDestinationToStatus:(id)arg1;

- (void)dealloc;
- (void)execute;
- (void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4;
- (void)_statusQueryTimedOut;
- (id)initWithItem:(id)arg1 delegate:(id)arg2 timeout:(double)arg3;

@end
