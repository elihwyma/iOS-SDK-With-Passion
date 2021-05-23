/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class PUMediaProvider;

__attribute__((visibility("hidden")))
@interface PUJoiningMediaProviderPredicateRecord : NSObject

{
    PUMediaProvider *_mediaProvider;
    CDUnknownBlockType _predicate;
}

@property (nonatomic, readonly) PUMediaProvider *mediaProvider;
@property (copy, nonatomic, readonly) CDUnknownBlockType predicate;

- (id)initWithMediaProvider:(id)arg1 predicate:(CDUnknownBlockType)arg2;

@end
