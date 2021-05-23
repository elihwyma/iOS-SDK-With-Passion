/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableString;

__attribute__((visibility("hidden")))
@interface PptTextBlock : NSObject

{
    struct PptTextHeaderAtom *mTextHeader;
    NSMutableString *mText;
    struct PptTextBlockStylingAtom *mStyleText;
    struct PptTextBlockSpecialInfoAtom *mSpecialInfo;
    NSMutableArray *mMetaCharacterFields;
    NSMutableArray *mBookmarks;
    NSMutableArray *mHyperlinks;
    struct PptTextRulerAtom *mTextRuler;
}

- (id)init;
- (id)text;
- (id)bookmarks;
- (unsigned int)textIndex;
- (id)hyperlinks;
- (int)textType;
- (void)readString:(id)arg1;
- (void)readStyles:(id)arg1;
- (void)readSpecialInfo:(id)arg1;
- (void)readMetaCharacterFieldsBookmarksAndHyperlinks:(id)arg1;
- (void)readTextBlock:(id)arg1;
- (void)writeTextBlock:(id)arg1;
- (id)metaCharacterFields;
- (struct PptTextRulerAtom *)textRuler;
- (int)paragraphRunCount;
- (struct PptParaRun *)paragraphRunAtIndex:(int)arg1;
- (int)characterRunCount;
- (struct PptCharRun *)characterRunAtIndex:(int)arg1;
- (int)specialInfoRunCount;
- (struct PptSpecialInfoRun *)specialInfoRunAtIndex:(int)arg1;

@end
