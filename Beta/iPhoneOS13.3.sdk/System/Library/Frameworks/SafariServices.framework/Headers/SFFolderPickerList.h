/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class WebBookmarkCollection;

@interface SFFolderPickerList : NSObject

{
    unsigned long long _style;
    WebBookmarkCollection *_bookmarkCollection;
}

- (id)initWithBookmarkCollection:(id)arg1 style:(unsigned long long)arg2;
- (id)folderListItemsIgnoringIdentifiers:(id)arg1;
- (void)_appendFolderAndChildren:(id)arg1 toArray:(id)arg2 depth:(unsigned long long)arg3 ignoringIdentifiers:(id)arg4;
- (void)_appendChildrenOfFolder:(id)arg1 toArray:(id)arg2 depth:(unsigned long long)arg3 ignoringIdentifiers:(id)arg4;

@end
