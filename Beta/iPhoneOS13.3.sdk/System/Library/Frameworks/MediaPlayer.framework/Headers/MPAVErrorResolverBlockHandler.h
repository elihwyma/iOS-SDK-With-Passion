/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPAVErrorResolver, NSString;

@interface MPAVErrorResolverBlockHandler : NSObject

{
    MPAVErrorResolverBlockHandler *_strongSelf;
    MPAVErrorResolver *_errorResolver;
    CDUnknownBlockType _resolutionHandler;
}

@property (nonatomic, readonly) MPAVErrorResolver *errorResolver;
@property (copy, nonatomic) CDUnknownBlockType resolutionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)errorResolver:(id)arg1 didResolveError:(id)arg2 withResolution:(long long)arg3;
- (id)initWithErrorResolver:(id)arg1;
- (void)resolveError:(id)arg1;

@end
