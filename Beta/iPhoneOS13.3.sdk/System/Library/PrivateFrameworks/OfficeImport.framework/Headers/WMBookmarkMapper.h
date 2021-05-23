/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMMapper.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WMBookmarkMapper : CMMapper

{
    NSString *mName;
    int mBookmarkType;
}

- (id)initWithWDBookmark:(id)arg1 parent:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2;

@end
