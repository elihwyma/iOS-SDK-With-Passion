/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/Swift-Protocol.h>

@class NSString;

@protocol MPMutableIdentifierSet <Swift>

@property (copy, nonatomic) NSString *containerUniqueID;
@property (copy, nonatomic) NSString *handoffCorrelationID;
@property (copy, nonatomic) NSString *contentItemID;
@property (copy, nonatomic) NSString *lyricsID;
@property (nonatomic) _Bool shouldExcludeFromShuffle;
@property (nonatomic, getter=isPlaceholder) _Bool placeholder;
@property (copy, nonatomic) NSString *vendorID;

- (unsigned short)setLibraryIdentifiersWithDatabaseID:block: /* Error: Ran out of types for this method. */;
- (unsigned short)setPersonalStoreIdentifiersWithPersonID:block: /* Error: Ran out of types for this method. */;
- (unsigned short)setUniversalStoreIdentifiersWithBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)setRadioIdentifiersWithBlock: /* Error: Ran out of types for this method. */;

@end
