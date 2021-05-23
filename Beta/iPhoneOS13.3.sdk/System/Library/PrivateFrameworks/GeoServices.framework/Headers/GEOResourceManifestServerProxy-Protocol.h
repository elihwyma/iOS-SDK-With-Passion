/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class GEOActiveTileGroup;

@protocol GEOResourceManifestServerProxyDelegate;

@protocol GEOResourceManifestServerProxy <Swift>

@property (weak, nonatomic) id <GEOResourceManifestServerProxyDelegate> delegate;
@property (nonatomic, readonly) GEOActiveTileGroup *activeTileGroup;

- (unsigned short)configuration;
- (unsigned short)authToken;
- (unsigned short)updateProgress;
- (unsigned short)initWithDelegate:configuration: /* Error: Ran out of types for this method. */;
- (unsigned short)openConnection;
- (unsigned short)closeConnection;
- (unsigned short)maximumZoomLevelForStyle:scale: /* Error: Ran out of types for this method. */;
- (unsigned short)serverQueue;
- (unsigned short)setManifestToken:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)updateIfNecessary: /* Error: Ran out of types for this method. */;
- (unsigned short)forceUpdate:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelCurrentManifestUpdate;
- (unsigned short)activateResourceScale: /* Error: Ran out of types for this method. */;
- (unsigned short)activateResourceScenario: /* Error: Ran out of types for this method. */;
- (unsigned short)deactivateResourceScale: /* Error: Ran out of types for this method. */;
- (unsigned short)deactivateResourceScenario: /* Error: Ran out of types for this method. */;
- (unsigned short)getResourceManifestWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setActiveTileGroupIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)setActiveTileGroupIdentifier:updateType:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)resetActiveTileGroup;
- (unsigned short)performOpportunisticResourceLoading;

@end
