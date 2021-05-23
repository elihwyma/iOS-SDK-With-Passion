/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CKMediaObject, CKUIVideoEditorController, NSString;

@protocol CKTrimControllerDelegate;

__attribute__((visibility("hidden")))
@interface CKVideoTrimController : NSObject

{
    CKMediaObject *_originalMediaObject;
    CKMediaObject *_trimmedMediaObject;
    CKUIVideoEditorController *_editVideoVC;
    id <CKTrimControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <CKTrimControllerDelegate> delegate;
@property (retain, nonatomic) CKMediaObject *originalMediaObject;
@property (retain, nonatomic) CKMediaObject *trimmedMediaObject;
@property (retain, nonatomic) CKUIVideoEditorController *editVideoVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)videoEditorControllerDidCancel:(id)arg1;
- (void)videoEditorController:(id)arg1 didSaveEditedVideoToPath:(id)arg2;
- (void)videoEditorController:(id)arg1 didFailWithError:(id)arg2;
- (void)videoEditorController:(id)arg1 didTrimVideoWithOptions:(id)arg2;
- (id)initWithMediaObject:(id)arg1 maxTrimDuration:(double)arg2;

@end
