/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEOComposedGuidanceEvent;

__attribute__((visibility("hidden")))
@interface _MNJunctionViewPreloadEvent : NSObject

{
    _Bool _needsPreload;
    GEOComposedGuidanceEvent *_junctionViewEvent;
}

@property (retain, nonatomic) GEOComposedGuidanceEvent *junctionViewEvent;
@property (nonatomic) _Bool needsPreload;

@end
