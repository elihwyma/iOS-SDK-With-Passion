/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class _KSFileEntry;

@interface _TIKeyboardSyncFileInstaller : NSObject

{
    _KSFileEntry *_entry;
}

- (void)dealloc;
- (void)invalidate;
- (void)execute;
- (_Bool)valid;
- (id)initWithEntry:(id)arg1;

@end
