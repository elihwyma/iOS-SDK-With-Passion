/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPIdentifierSet, MPModelFileAsset;

@interface MPModelVerifyLocalFileAssetIntegrityRequest : NSObject

{
    MPIdentifierSet *_sourceItemIdentifiers;
    MPModelFileAsset *_fileAsset;
}

@property (retain, nonatomic) MPIdentifierSet *sourceItemIdentifiers;
@property (retain, nonatomic) MPModelFileAsset *fileAsset;

+ (id)_operationQueue;

- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithFileAsset:(id)arg1 sourceItemIdentifiers:(id)arg2;
- (id)mediaLibraryForItemIdentifiers:(id)arg1;

@end
