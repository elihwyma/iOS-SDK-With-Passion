/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPPlaybackArchiveConfiguration, NSArray, NSString;

@interface MPMediaPickerConfiguration : NSObject <Swift>

{
    _Bool _allowsPickingMultipleItems;
    _Bool _showsCloudItems;
    _Bool _showsItemsWithProtectedAssets;
    _Bool _picksSingleCollectionEntity;
    _Bool _pickingForExternalPlayer;
    unsigned int _watchCompatibilityVersion;
    unsigned long long _mediaTypes;
    NSString *_prompt;
    NSArray *_typeIdentifiers;
    long long _selectionMode;
    MPPlaybackArchiveConfiguration *_playbackArchiveConfiguration;
    long long _supportedContentOptions;
}

@property (nonatomic) long long supportedContentOptions;
@property (nonatomic) unsigned long long mediaTypes;
@property (nonatomic) _Bool allowsPickingMultipleItems;
@property (nonatomic) _Bool showsCloudItems;
@property (nonatomic) _Bool showsItemsWithProtectedAssets;
@property (copy, nonatomic) NSString *prompt;
@property (nonatomic) _Bool picksSingleCollectionEntity;
@property (nonatomic) unsigned int watchCompatibilityVersion;
@property (copy, nonatomic) NSArray *typeIdentifiers;
@property (nonatomic) long long selectionMode;
@property (nonatomic) _Bool showsCatalogContent;
@property (nonatomic) _Bool showsLibraryContent;
@property (nonatomic) _Bool supportsUnavailableContent;
@property (nonatomic) _Bool pickingForExternalPlayer;
@property (retain, nonatomic) MPPlaybackArchiveConfiguration *playbackArchiveConfiguration;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
