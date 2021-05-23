/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPModelObject, MPSectionedCollection;

@interface MPModelLibraryImportChangeRequest : NSObject <Swift>

{
    _Bool _shouldLibraryAdd;
    MPModelObject *_referralObject;
    MPSectionedCollection *_modelObjects;
}

@property (copy, nonatomic) MPModelObject *referralObject;
@property (copy, nonatomic) MPSectionedCollection *modelObjects;
@property (nonatomic) _Bool shouldLibraryAdd;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;

@end
