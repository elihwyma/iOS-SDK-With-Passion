/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MapsSuggestionsTempShortcutStorage : NSObject

{
    struct Queue _queue;
    NSString *_path;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

+ (id)path;

- (id)init;
- (id).cxx_construct;
- (void)setChangeHandler:(CDUnknownBlockType)arg1;
- (_Bool)addOrUpdateShortcuts:(struct NSArray *)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)loadAllShortcutsWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)removeShortcuts:(struct NSArray *)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)moveShortcutToFront:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)moveShortcut:(id)arg1 afterShortcut:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)moveShortcut:(id)arg1 beforeShortcut:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)moveShortcutToBack:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)moveShortcut:(id)arg1 toIndex:(long long)arg2 handler:(CDUnknownBlockType)arg3;

@end
