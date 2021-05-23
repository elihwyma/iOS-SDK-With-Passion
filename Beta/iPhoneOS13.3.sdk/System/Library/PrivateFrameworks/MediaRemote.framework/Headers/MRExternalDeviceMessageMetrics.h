/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MRExternalDeviceMessageMetrics : NSObject

{
    NSString *_path;
    NSMutableDictionary *_entries;
}

- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (void)write;
- (void)addMessage:(id)arg1 data:(id)arg2;

@end
