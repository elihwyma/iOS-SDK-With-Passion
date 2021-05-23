/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMMapper.h>

@class OADParagraph;

__attribute__((visibility("hidden")))
@interface PMParagraphMapper : CMMapper

{
    OADParagraph *mParagraph;
}

- (id)initWithOadParagraph:(id)arg1 parent:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2 isFirstParagraph:(_Bool)arg3;
- (id)copyParagraphStyleWithState:(id)arg1 isFirstParagraph:(_Bool)arg2;
- (void)addEndCharacterStyleToStyle:(id)arg1;
- (int)firstTextRunFontSize;
- (id)fontScheme;

@end
