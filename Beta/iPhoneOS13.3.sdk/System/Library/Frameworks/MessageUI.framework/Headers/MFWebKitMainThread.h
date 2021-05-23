/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class MFLock;

@interface MFWebKitMainThread : NSObject

{
    struct __CFDictionary *_visibleDict;
    MFLock *_visibleDictLock;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (int)dictValueForMimeType:(id)arg1;
- (void)_mainThreadPopulateDictForMimeType:(id)arg1;

@end
