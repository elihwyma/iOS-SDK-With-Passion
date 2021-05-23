/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIArchiveItem.h>

__attribute__((visibility("hidden")))
@interface _UILibArchiveItem : _UIArchiveItem

{
    struct ui_archive_entry *_underlyingArchiveEntry;
    struct ui_archive *_underlyingArchive;
}

@property (readonly) struct ui_archive_entry *underlyingArchiveEntry;
@property (readonly) struct ui_archive *underlyingArchive;

+ (id)itemByReadingAttributesFromUnderlyingArchiveEntry:(struct ui_archive_entry *)arg1 archive:(struct ui_archive *)arg2;

@end
