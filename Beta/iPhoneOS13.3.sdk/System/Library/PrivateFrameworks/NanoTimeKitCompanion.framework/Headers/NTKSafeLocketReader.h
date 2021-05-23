/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NPTOLocket, NSString;

@protocol NTKSafeLocketReaderDelegate;

@interface NTKSafeLocketReader : NSObject

{
    NSString *_defaultPhotoPath;
    _Bool _isPhotoLibraryAvailable;
    NPTOLocket *_locket;
    id <NTKSafeLocketReaderDelegate> _delegate;
}

@property (weak, nonatomic) id <NTKSafeLocketReaderDelegate> delegate;
@property (nonatomic, readonly) _Bool firstUnlockHasOccurred;
@property (nonatomic, readonly) unsigned long long numberOfLoadedPhotos;
@property (nonatomic, readonly) unsigned long long numberOfTotalPhotos;
@property (nonatomic, readonly) NPTOLocket *locket;

- (id)title;
- (id)subtitle;
- (long long)keyAssetIndex;
- (void)loadPhotoAtIndex:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (unsigned long long)indexOfPhotoWithIdentifier:(id)arg1;
- (id)initWithDefaultPhotoPath:(id)arg1;
- (id)remoteCollectionIdentifier;

@end
