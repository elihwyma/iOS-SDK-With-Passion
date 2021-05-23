/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/Swift-Protocol.h>

@class NSString;

@protocol MPSectionedIdentifierListEnumerationItem <Swift>

@property (nonatomic, readonly) NSString *sectionIdentifier;
@property (nonatomic, readonly) NSString *itemIdentifier;
@property (nonatomic, readonly, getter=isRemoved) _Bool removed;

@end
