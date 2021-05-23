/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CNiOSABDependentPropertiesUpdateContext : NSObject

{
    _Bool _hasPendingImageData;
    _Bool _hasPendingCropRect;
    _Bool _hasPendingThumbnailImageData;
    _Bool _hasPendingSyncImageData;
    NSData *_pendingImageData;
    NSData *_pendingThumbnailImageData;
    NSData *_pendingFullscreenImageData;
    NSData *_pendingSyncImageData;
    struct CGRect _pendingCropRect;
}

@property (nonatomic) _Bool hasPendingImageData;
@property (nonatomic) _Bool hasPendingCropRect;
@property (nonatomic) _Bool hasPendingThumbnailImageData;
@property (nonatomic) _Bool hasPendingSyncImageData;
@property (copy, nonatomic) NSData *pendingImageData;
@property (nonatomic) struct CGRect pendingCropRect;
@property (copy, nonatomic) NSData *pendingThumbnailImageData;
@property (copy, nonatomic) NSData *pendingFullscreenImageData;
@property (copy, nonatomic) NSData *pendingSyncImageData;

+ (_Bool)shouldSetWatchChanges;

- (_Bool)flushPendingImageChangesToPerson:(void *)arg1 logger:(id)arg2 error:(id *)arg3;
- (_Bool)setWatchChangesforThumbnailImageDataToPerson:(void *)arg1 error:(id *)arg2;
- (void)resetAllData;

@end
