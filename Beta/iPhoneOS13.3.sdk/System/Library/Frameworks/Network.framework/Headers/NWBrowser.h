/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@class NSSet, NWBrowseDescriptor, NWParameters;

@protocol OS_nw_browser;

@interface NWBrowser : NSObject

{
    NWBrowseDescriptor *_descriptor;
    NWParameters *_parameters;
    NSObject<OS_nw_browser> *_internalBrowser;
    NSSet *_internalDiscoveredEndpoints;
}

@property (readonly) NSObject<OS_nw_browser> *internalBrowser;
@property (retain) NSSet *internalDiscoveredEndpoints;
@property (readonly) NWBrowseDescriptor *descriptor;
@property (readonly) NWParameters *parameters;
@property (nonatomic, readonly) NSSet *discoveredEndpoints;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)dealloc;
- (void)cancel;
- (id)initWithDescriptor:(id)arg1 parameters:(id)arg2;
- (void)setUpdateHandler;
- (id)copyDiscoveredEndpoints;

@end
