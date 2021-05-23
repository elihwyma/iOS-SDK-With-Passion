/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <TextInput/TIDocumentState.h>

@interface TIDocumentState (UITextInputAdditions)

+ (id)documentStateOfDocument:(id)arg1;
+ (id)documentStateOfDocumentWithParagraph:(id)arg1;
+ (id)documentStateOfDocumentWithRecentInputIdentifier:(id)arg1;
+ (id)documentStateOfSecureTextDocument:(id)arg1;

- (id)initWithDocument:(id)arg1;
- (id)initWithDocumentWithParagraph:(id)arg1;
- (id)initWithDocumentWithRecentInputIdentifier:(id)arg1;
- (id)initWithSecureTextDocument:(id)arg1;
- (id)_positionFromPosition:(id)arg1 toPreviousWordBoundaryInDocument:(id)arg2 tokenAccumulator:(CDUnknownBlockType)arg3;
- (id)_contextBeforePosition:(id)arg1 inDocument:(id)arg2 toBoundary:(long long)arg3;
- (id)_contextAfterPosition:(id)arg1 inDocument:(id)arg2 toBoundary:(long long)arg3;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 inDocument:(id)arg3;
- (id)copyTextInRange:(id)arg1 fromDocument:(id)arg2;
- (id)initWithDocument:(id)arg1 contextBoundary:(long long)arg2;
- (id)_positionFromPosition:(id)arg1 toPreviousWordStartInDocument:(id)arg2 tokenAccumulator:(CDUnknownBlockType)arg3;
- (id)fullString;

@end
