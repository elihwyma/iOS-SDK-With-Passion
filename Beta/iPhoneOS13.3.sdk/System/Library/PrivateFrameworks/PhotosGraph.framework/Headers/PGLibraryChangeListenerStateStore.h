/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSURL, PHPersistentChangeToken;

@interface PGLibraryChangeListenerStateStore : NSObject

{
    NSURL *_changeTokenURL;
}

@property (nonatomic, readonly) PHPersistentChangeToken *changeToken;

- (id)initWithPhotoLibrary:(id)arg1;
- (void)setChangeToken:(id)arg1;

@end
