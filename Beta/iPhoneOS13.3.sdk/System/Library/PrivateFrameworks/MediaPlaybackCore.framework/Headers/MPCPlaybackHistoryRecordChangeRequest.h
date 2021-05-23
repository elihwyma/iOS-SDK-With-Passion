/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

#import <MediaPlaybackCore/Swift-Protocol.h>

@class MPModelGenericObject, MPModelPlayEvent;

@interface MPCPlaybackHistoryRecordChangeRequest : NSObject <Swift>

{
    _Bool _allowsStoreContainerImport;
    _Bool _updateHistoryPlaylist;
    MPModelPlayEvent *_playEvent;
    MPModelGenericObject *_itemGenericObject;
    long long _repeatType;
}

@property (nonatomic) _Bool allowsStoreContainerImport;
@property (retain, nonatomic) MPModelPlayEvent *playEvent;
@property (retain, nonatomic) MPModelGenericObject *itemGenericObject;
@property (nonatomic) long long repeatType;
@property (nonatomic) _Bool updateHistoryPlaylist;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;

@end
