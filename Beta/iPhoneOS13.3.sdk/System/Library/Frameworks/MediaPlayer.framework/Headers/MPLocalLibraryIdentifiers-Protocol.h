/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/Swift-Protocol.h>

@class NSString;

@protocol MPLocalLibraryIdentifiers <Swift>

@property (nonatomic, readonly) NSString *databaseID;
@property (nonatomic, readonly) long long persistentID;
@property (nonatomic, readonly) long long containedPersistentID;
@property (nonatomic, readonly) long long syncID;

@end
