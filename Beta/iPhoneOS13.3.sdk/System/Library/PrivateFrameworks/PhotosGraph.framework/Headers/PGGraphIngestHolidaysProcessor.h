/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PGGraphIngestHolidaysProcessor : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)shouldRunWithGraphUpdate:(id)arg1;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)insertHolidaysWithMomentNodes:(id)arg1 graph:(id)arg2 locale:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (void)insertHolidaysBetweenLocalDate:(id)arg1 andLocalDate:(id)arg2 graph:(id)arg3 locale:(id)arg4 progressBlock:(CDUnknownBlockType)arg5;

@end
