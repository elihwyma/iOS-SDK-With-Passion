/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface PVDocumentWrapper : NSObject

{
    void *_ozxDocument;
}

- (void)dealloc;
- (id)initWithOZXDocument:(void *)arg1 forKey:(id)arg2;
- (void *)ozxDocument;

@end
