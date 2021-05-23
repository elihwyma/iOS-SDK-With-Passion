/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

#import <VideosUI/Swift-Protocol.h>

@class NSArray, NSNumber, NSString;

@protocol VUIDownloadEntityDelegate, VUIMediaEntityIdentifier;

__attribute__((visibility("hidden")))
@interface VUIDownloadEntity : NSObject <Swift>

{
    id <VUIDownloadEntityDelegate> _delegate;
    long long _downloadType;
    NSObject<VUIMediaEntityIdentifier> *_showIdentifier;
    NSArray *_mediaEntities;
    NSString *_title;
    NSNumber *_releaseYear;
    NSNumber *_duration;
    NSNumber *_episodeNumber;
    NSNumber *_numberOfMediaItems;
    NSNumber *_numberOfMediaItemsDownloading;
}

@property (weak, nonatomic) id <VUIDownloadEntityDelegate> delegate;
@property (nonatomic) long long downloadType;
@property (retain, nonatomic) NSObject<VUIMediaEntityIdentifier> *showIdentifier;
@property (retain, nonatomic) NSArray *mediaEntities;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *releaseYear;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSNumber *episodeNumber;
@property (retain, nonatomic) NSNumber *numberOfMediaItems;
@property (retain, nonatomic) NSNumber *numberOfMediaItemsDownloading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMediaEntity:(id)arg1 withDownloadType:(long long)arg2;
- (id)initWithMediaEntities:(id)arg1 withDownloadType:(long long)arg2;
- (void)_configureWithMediaEntities:(id)arg1;
- (void)mediaEntityAssetController:(id)arg1 stateDidChange:(id)arg2;

@end
