/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUSessionInfo.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUImagePickerSessionInfo : PUSessionInfo

{
    _Bool _showsPrompt;
    unsigned long long _selectionLimit;
    NSString *_staticPrompt;
}

@property (nonatomic) _Bool showsPrompt;
@property (copy, nonatomic) NSString *staticPrompt;

- (id)initWithPhotoSelectionManager:(id)arg1;
- (_Bool)isSelectingAssets;
- (id)localizedPrompt;
- (unsigned long long)selectionLimit;
- (void)setSelectionLimit:(unsigned long long)arg1;

@end
