/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURL, NSUUID, NWEndpoint, NWInterface, NWNetworkDescription, NWParameters, NWPathEvaluator;

@interface NWMonitor : NSObject

{
    unsigned int _mID;
    long long _status;
    NWNetworkDescription *_bestAvailableNetworkDescription;
    NSArray *_networkDescriptionArray;
    NWEndpoint *_endpoint;
    NWParameters *_parameters;
    NWPathEvaluator *_pathEvaluator;
    NSUUID *_lastProbeUUID;
    NSURL *_lastProbeURL;
    NWInterface *_interface;
}

@property long long status;
@property (retain) NWNetworkDescription *bestAvailableNetworkDescription;
@property (retain) NSArray *networkDescriptionArray;
@property (retain) NWParameters *parameters;
@property (retain) NWEndpoint *endpoint;
@property (retain) NWPathEvaluator *pathEvaluator;
@property (retain) NSUUID *lastProbeUUID;
@property (retain) NSURL *lastProbeURL;
@property (retain) NWInterface *interface;
@property unsigned int mID;
@property (nonatomic, readonly) NSString *privateDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)queue;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)copySavedMonitorForNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3;
+ (void)saveMonitor:(id)arg1;
+ (id)monitorWithNetworkDescription:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3;
+ (id)monitorWithNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3;
+ (id)mainOperationQueue;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;
- (void)evaluateStartingAtIndex:(unsigned long long)arg1 probeUUID:(id)arg2 probeWasSuccessful:(_Bool)arg3;
- (_Bool)matchesNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3;

@end
