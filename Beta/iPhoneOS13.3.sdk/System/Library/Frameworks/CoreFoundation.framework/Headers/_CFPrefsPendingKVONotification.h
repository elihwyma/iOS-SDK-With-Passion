/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _CFPrefsPendingKVONotification : NSObject

{
    NSObject *source;
    id oldValues;
    id values;
}

@property (retain) NSObject *source;
@property (retain) id oldValues;
@property (retain) id values;

- (void)dealloc;

@end
