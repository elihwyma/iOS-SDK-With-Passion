/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/WDRun.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WDBookmark : WDRun

{
    NSString *mName;
    int mBookmarkType;
}

- (id)description;
- (id)name;
- (void)setName:(id)arg1;
- (int)bookmarkType;
- (int)runType;
- (void)setBookmarkType:(int)arg1;
- (id)initWithParagraph:(id)arg1 name:(id)arg2 type:(int)arg3;

@end
