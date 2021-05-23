/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCOperation.h>

@class BRCPrivateServerZone, NSString;

__attribute__((visibility("hidden")))
@interface BRCZonePurgeOperation : _BRCOperation

{
    BRCPrivateServerZone *_serverZone;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)main;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (id)initWithServerZone:(id)arg1;

@end
