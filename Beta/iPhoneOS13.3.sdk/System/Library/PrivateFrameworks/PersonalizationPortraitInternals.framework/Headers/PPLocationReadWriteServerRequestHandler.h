/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@interface PPLocationReadWriteServerRequestHandler : NSObject

- (void)clearWithCompletion:(CDUnknownBlockType)arg1;
- (void)cloudSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)donateLocations:(id)arg1 source:(id)arg2 contextualNamedEntities:(id)arg3 algorithm:(unsigned short)arg4 cloudSync:(_Bool)arg5 decayRate:(double)arg6 completion:(CDUnknownBlockType)arg7;

@end
