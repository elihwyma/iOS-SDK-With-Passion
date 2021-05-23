/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface MPStoreLibraryMappingResponse : NSObject

{
    NSMutableDictionary *_storeIdentifierSetToLibraryIdentifierSet;
    long long _libraryAddedStatus;
}

@property (nonatomic) long long libraryAddedStatus;

- (id)libraryIdentifierSetForIdentifierSet:(id)arg1;
- (void)setLibraryIdentifierSet:(id)arg1 forIdentifierSet:(id)arg2;

@end
