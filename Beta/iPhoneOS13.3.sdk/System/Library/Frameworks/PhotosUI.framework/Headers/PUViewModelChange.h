/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@interface PUViewModelChange : NSObject

{
    _Bool _hasChanges;
}

@property (nonatomic, readonly) _Bool hasChanges;

- (void)setHasChanges;

@end
