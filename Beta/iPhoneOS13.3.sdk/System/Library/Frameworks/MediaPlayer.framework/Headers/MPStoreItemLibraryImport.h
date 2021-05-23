/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPModelObject, NSArray;

@interface MPStoreItemLibraryImport : NSObject

{
    _Bool _addToCloudLibrary;
    NSArray *_importElements;
    MPModelObject *_referralObject;
}

@property (nonatomic, readonly) NSArray *importElements;
@property (nonatomic, readonly) _Bool addToCloudLibrary;
@property (nonatomic, readonly) MPModelObject *referralObject;

- (id)initWithImportElements:(id)arg1 usingCloudLibraryDestination:(_Bool)arg2;
- (id)initWithImportElements:(id)arg1 referralObject:(id)arg2 usingCloudLibraryDestination:(_Bool)arg3;

@end
