/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVWeakReference, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVMediaSelectionInternal : NSObject

{
    AVWeakReference *assetWeakReference;
    NSArray *groupDictionaries;
    NSMutableArray *selectedMediaArray;
}

@end
