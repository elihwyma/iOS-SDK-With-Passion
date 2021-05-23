/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class CLGeocoder, CLLocationManager, CNContactStore, MKLocalSearch, MKLocalSearchCompleter, NSArray, NSString;

@protocol OS_dispatch_queue, PKAddressSearchModelDelegate;

@interface PKAddressSearchModel : NSObject

{
    NSArray *_contactsSearchResults;
    NSArray *_completionSearchResults;
    NSArray *_recentsSearchResults;
    id <PKAddressSearchModelDelegate> _delegate;
    CLLocationManager *_locationManager;
    MKLocalSearchCompleter *_completer;
    CLGeocoder *_geocoder;
    MKLocalSearch *_localSearch;
    CNContactStore *_contactStore;
    NSObject<OS_dispatch_queue> *_resultsQueue;
}

@property (retain, nonatomic) CLLocationManager *locationManager;
@property (retain, nonatomic) MKLocalSearchCompleter *completer;
@property (retain, nonatomic) CLGeocoder *geocoder;
@property (retain, nonatomic) MKLocalSearch *localSearch;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultsQueue;
@property (nonatomic, readonly) NSArray *completionSearchResults;
@property (nonatomic, readonly) NSArray *contactsSearchResults;
@property (nonatomic, readonly) NSArray *recentsSearchResults;
@property (weak, nonatomic) id <PKAddressSearchModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)beginSearch:(id)arg1;
- (void)completerDidUpdateResults:(id)arg1;
- (void)selectMapSearchCompletion:(id)arg1;
- (void)_updateRecents:(id)arg1;
- (void)endSearch;
- (void)_resetContactsSearchResults;

@end
