/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPModelRequest, MPPropertySet, MPSectionedCollection;

@interface MPModelResponse : NSObject

{
    _Bool _valid;
    MPModelRequest *_request;
    MPPropertySet *_deferredSectionProperties;
    MPPropertySet *_deferredItemProperties;
    MPSectionedCollection *_results;
}

@property (retain, nonatomic) MPPropertySet *deferredSectionProperties;
@property (retain, nonatomic) MPPropertySet *deferredItemProperties;
@property (copy, nonatomic) MPSectionedCollection *results;
@property (nonatomic, readonly, getter=isEmpty) _Bool empty;
@property (copy, nonatomic, readonly) MPModelRequest *request;
@property (nonatomic, readonly, getter=isValid) _Bool valid;

- (id)init;
- (id)description;
- (id)debugDescription;
- (void)_invalidate;
- (id)initWithRequest:(id)arg1;
- (void)getChangeDetailsFromPreviousResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
