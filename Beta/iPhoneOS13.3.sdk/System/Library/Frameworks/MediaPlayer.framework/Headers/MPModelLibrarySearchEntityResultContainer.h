/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPMediaLibraryEntityTranslationContext, MPModelLibrarySearchScope;

@interface MPModelLibrarySearchEntityResultContainer : NSObject

{
    MPModelLibrarySearchScope *_scope;
    MPMediaLibraryEntityTranslationContext *_entityTranslationContext;
    shared_ptr_274c5e8b _entityQueryResult;
}

@property (nonatomic, readonly) shared_ptr_274c5e8b entityQueryResult;
@property (copy, nonatomic, readonly) MPModelLibrarySearchScope *scope;
@property (nonatomic, readonly) MPMediaLibraryEntityTranslationContext *entityTranslationContext;

- (id).cxx_construct;
- (id)initWithEntityQueryResult:(shared_ptr_274c5e8b)arg1 forScope:(id)arg2 entityTranslationContext:(id)arg3;

@end
