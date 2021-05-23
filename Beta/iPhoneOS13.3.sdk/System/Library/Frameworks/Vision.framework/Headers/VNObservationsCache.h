/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface VNObservationsCache : NSObject

{
    NSMapTable *_observationsCache;
}

- (id)init;
- (id)observationsForKey:(id)arg1;
- (void)setObservations:(id)arg1 forKey:(id)arg2;
- (id)observationsForRequest:(id)arg1 testedKeyHandler:(CDUnknownBlockType)arg2;

@end
