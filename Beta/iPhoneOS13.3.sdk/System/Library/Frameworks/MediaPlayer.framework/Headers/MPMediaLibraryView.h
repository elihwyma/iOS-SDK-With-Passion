/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPMediaLibrary;

@interface MPMediaLibraryView : NSObject <Swift>

{
    shared_ptr_6af3da69 _coreView;
    MPMediaLibrary *_library;
    unsigned long long _filteringOptions;
}

@property (nonatomic, readonly) shared_ptr_6af3da69 mlCoreView;
@property (nonatomic, readonly) MPMediaLibrary *library;
@property (nonatomic, readonly) unsigned long long filteringOptions;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id).cxx_construct;
- (id)initWithLibrary:(id)arg1 filteringOptions:(unsigned long long)arg2;
- (_Bool)hasEntitiesForModelKind:(id)arg1;
- (void)performCoreQuery:(shared_ptr_34add297)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)performCoreSearchQuery:(shared_ptr_299ddd6f)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (shared_ptr_56e9c9de)_performCoreQuery:(shared_ptr_34add297)arg1 error:(id *)arg2;

@end
