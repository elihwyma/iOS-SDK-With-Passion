/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString, SWDatastore;

@protocol SWLogger;

@interface SWDatastoreManager : NSObject

{
    SWDatastore *_datastore;
    NSHashTable *_observers;
    id <SWLogger> _logger;
}

@property (nonatomic, readonly) NSHashTable *observers;
@property (nonatomic, readonly) id <SWLogger> logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) SWDatastore *datastore;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)updateDatastore:(id)arg1 originatingSession:(id)arg2;
- (id)initWithDatastore:(id)arg1 logger:(id)arg2;

@end
