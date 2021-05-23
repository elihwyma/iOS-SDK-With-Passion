/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_os_log;

@interface PGGraphIngestMusicProcessor : NSObject

{
    NSObject<OS_os_log> *_loggingConnection;
}

@property (nonatomic, readonly) NSObject<OS_os_log> *loggingConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)shouldRunWithGraphUpdate:(id)arg1;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)processMusicForGraph:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)_ingestStreamEventSession:(id)arg1 graph:(id)arg2 performerNodesByName:(id)arg3;

@end
