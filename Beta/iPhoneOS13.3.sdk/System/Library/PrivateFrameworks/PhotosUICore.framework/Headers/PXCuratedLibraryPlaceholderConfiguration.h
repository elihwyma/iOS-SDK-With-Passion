/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PXCuratedLibraryPlaceholderConfiguration : NSObject

{
    NSString *_title;
    NSString *_message;
    NSString *_buttonTitle;
    CDUnknownBlockType _buttonAction;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) NSString *buttonTitle;
@property (nonatomic, readonly) CDUnknownBlockType buttonAction;

+ (id)configurationWithPhotoLibrary:(id)arg1 serviceStatus:(id)arg2;

- (id)initWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 buttonAction:(CDUnknownBlockType)arg4;

@end
