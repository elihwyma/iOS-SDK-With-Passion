/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/MSPContainer.h>

@interface MSPPinnedPlacesContainer : MSPContainer

+ (id)sharedLocalContainer;
+ (id)sharedRemoteContainer;

- (id)queryWithDelegate:(id)arg1;

@end
