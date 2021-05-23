/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@protocol PUSlideshowDisplayContext;

__attribute__((visibility("hidden")))
@interface PUSlideshowContextRegistry : NSObject

{
    NSMutableArray *__displayContexts;
}

@property (retain, nonatomic, setter=_setDisplayContexts:) NSMutableArray *_displayContexts;
@property (nonatomic, readonly) id <PUSlideshowDisplayContext> currentDisplayContext;
@property (copy, nonatomic, readonly) NSArray *displayContexts;

- (id)init;
- (_Bool)addDisplayContext:(id)arg1;
- (_Bool)removeDisplayContext:(id)arg1;

@end
