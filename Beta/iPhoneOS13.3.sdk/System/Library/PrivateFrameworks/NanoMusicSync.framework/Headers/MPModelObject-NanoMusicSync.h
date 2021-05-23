/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

#import <MediaPlayer/MPModelObject.h>

@class NSString;

@interface MPModelObject (NanoMusicSync)

@property (nonatomic, readonly) NSString *nms_syncInfoContainerIdentifier;

- (_Bool)nms_originalIdentifierSetHasNoLibraryPersistentID;

@end
