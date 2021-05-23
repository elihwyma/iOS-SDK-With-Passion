/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SXBlueprintAnalyzer : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)markersFromBlueprint:(id)arg1 components:(id)arg2 DOMObjectProvider:(id)arg3 cursor:(id)arg4;
- (void)iterateMarkers:(id)arg1 onMarkerFound:(CDUnknownBlockType)arg2 then:(CDUnknownBlockType)arg3 onEndReached:(CDUnknownBlockType)arg4;
- (_Bool)componentPlacedAboveComponentBlueprint:(id)arg1 blueprint:(id)arg2;
- (void)analyzeBlueprint:(id)arg1 DOMObjectProvider:(id)arg2 onMarkerFound:(CDUnknownBlockType)arg3 then:(CDUnknownBlockType)arg4 onEndReached:(CDUnknownBlockType)arg5;

@end
