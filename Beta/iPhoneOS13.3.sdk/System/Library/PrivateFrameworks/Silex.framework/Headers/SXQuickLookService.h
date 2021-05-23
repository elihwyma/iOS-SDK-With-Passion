/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, QLThumbnailGenerator;

@interface SXQuickLookService : NSObject

{
    QLThumbnailGenerator *_generator;
}

@property (nonatomic, readonly) QLThumbnailGenerator *generator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)fetchThumbnailForFile:(id)arg1 size:(struct CGSize)arg2 onCompletion:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4;

@end
