/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class NSURL, SCNMTLLibraryManager;

@protocol MTLLibrary;

__attribute__((visibility("hidden")))
@interface SCNMTLLibrary : NSObject

{
    NSURL *_libraryURL;
    SCNMTLLibraryManager *_manager;
    id <MTLLibrary> _library;
}

@property (nonatomic, readonly) id <MTLLibrary> library;

- (void)dealloc;
- (void)_load;
- (id)initWithPath:(id)arg1 manager:(id)arg2;

@end
