/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NTKPhotosReaderDelegate;

@interface NTKPhotosReader : NSObject

{
    NSString *_resourceDirectory;
    id <NTKPhotosReaderDelegate> _delegate;
    NSString *_assetCollection;
    unsigned long long _mutationCount;
}

@property (retain, nonatomic) NSString *assetCollection;
@property (nonatomic) unsigned long long mutationCount;
@property (nonatomic, readonly) NSString *resourceDirectory;
@property (weak, nonatomic) id <NTKPhotosReaderDelegate> delegate;
@property (nonatomic, readonly) unsigned long long count;

+ (id)readerForResourceDirectory:(id)arg1;
+ (id)readerForSyncedAlbumWithResourceDirectory:(id)arg1;
+ (id)readerForMemoriesWithResourceDirectory:(id)arg1;

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)firstObject;
- (id)lastObject;
- (id)initWithResourceDirectory:(id)arg1;

@end
