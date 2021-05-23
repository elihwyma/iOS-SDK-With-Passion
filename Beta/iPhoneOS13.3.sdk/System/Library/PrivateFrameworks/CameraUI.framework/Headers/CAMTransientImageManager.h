/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface CAMTransientImageManager : NSObject

{
    NSMutableDictionary *__pairedVideosByPairedUUID;
    NSMutableDictionary *__activeRequestsByPairedUUID;
}

@property (nonatomic, readonly) NSMutableDictionary *_pairedVideosByPairedUUID;
@property (nonatomic, readonly) NSMutableDictionary *_activeRequestsByPairedUUID;
@property (nonatomic, readonly, getter=isEmpty) _Bool empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)requestPairedVideoURLForUUID:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (id)insertPairedVideoWithConvertible:(id)arg1 filterType:(long long)arg2;
- (void)removePairedVideoForUUID:(id)arg1;
- (id)existingPairedVideoUUIDs;
- (void)_handleRequestTimeout:(id)arg1;
- (id)existingPairedVideoForUUID:(id)arg1;

@end
