/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSFileWatcherObservations : NSObject

{
    _Bool _attributesChanged;
    _Bool _contentsChanged;
    _Bool _deleted;
    _Bool _moved;
    NSString *_lastObservedPath;
    _Bool _didResetPath;
    NSString *_path;
}

- (void)dealloc;
- (id)description;
- (id)initWithPath:(id)arg1;
- (void)addAttributeChange;
- (void)addContentsChange;
- (void)addDeletion;
- (void)addDetectedMoveToPath:(id)arg1;
- (void)addAnnouncedMoveToPath:(id)arg1;
- (void)notifyObserver:(CDUnknownBlockType)arg1;

@end
