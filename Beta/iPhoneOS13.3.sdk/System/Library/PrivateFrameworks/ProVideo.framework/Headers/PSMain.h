/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface PSMain : NSObject

- (id)init;
- (void)applicationDidFinishLaunching;
- (_Bool)canAddEmitterToDoc:(struct OZDocument *)arg1;
- (void)setupEmitter:(struct PSEmitter *)arg1 inDoc:(struct OZDocument *)arg2;
- (void)addEmitter:(id)arg1;
- (void)addReplicator:(id)arg1;
- (_Bool)validateAction:(SEL)arg1;

@end
