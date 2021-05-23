/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUINamedLookup.h>

@class NSMutableDictionary;

@interface CUINamedRecognitionGroup : CUINamedLookup

{
    NSMutableDictionary *_imageContents;
    NSMutableDictionary *_objectContents;
}

- (void)dealloc;
- (id)recognitionImageWithName:(id)arg1;
- (id)recognitionObjectWithName:(id)arg1;
- (id)initWithName:(id)arg1 contentsFromCatalog:(id)arg2 usingRenditionKey:(id)arg3 fromTheme:(unsigned long long)arg4;
- (id)namedRecognitionItemList;
- (id)namedRecognitionImageImageList;
- (id)namedRecognitionObjectObjectList;
- (id)recognitionItemsWithName:(id)arg1;

@end
