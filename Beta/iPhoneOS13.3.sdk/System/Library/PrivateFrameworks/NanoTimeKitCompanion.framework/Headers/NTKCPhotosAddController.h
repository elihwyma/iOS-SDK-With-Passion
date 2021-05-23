/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class NSString;

@interface NTKCPhotosAddController : NSObject <Swift>

{
    CDUnknownBlockType _multipleCompletion;
    CDUnknownBlockType _singleCompletion;
}

@property (copy, nonatomic) CDUnknownBlockType multipleCompletion;
@property (copy, nonatomic) CDUnknownBlockType singleCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_sharedInstance;
+ (void)presentPhotosAddControllerFromViewController:(id)arg1 selectionLimit:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (void)_presentAddControllerFromViewController:(id)arg1 multiple:(_Bool)arg2 limit:(unsigned long long)arg3 completion:(id)arg4;
+ (void)presentPhotosAddControllerFromViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)presentSinglePhotoAddControllerFromViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;
- (void)_dismiss:(id)arg1 photos:(id)arg2 single:(id)arg3;

@end
