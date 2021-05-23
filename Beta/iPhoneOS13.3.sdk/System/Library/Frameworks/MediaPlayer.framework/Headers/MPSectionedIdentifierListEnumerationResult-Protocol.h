/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/Swift-Protocol.h>

@protocol MPSectionedIdentifierListEnumerationResult <Swift>

@property (nonatomic, readonly) long long branchDepth;
@property (nonatomic, readonly) long long entryType;

- (unsigned short)itemResult;
- (unsigned short)trackingEntryResult;

@end
