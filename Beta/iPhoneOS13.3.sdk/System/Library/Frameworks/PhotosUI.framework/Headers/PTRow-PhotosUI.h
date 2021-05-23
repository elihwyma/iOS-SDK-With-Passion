/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PrototypeTools/PTRow.h>

@interface PTRow (PhotosUI)

+ (id)pu_rowWithTitle:(id)arg1 asynchronousOutputProducer:(CDUnknownBlockType)arg2;
+ (id)pu_rowWithTitle:(id)arg1 settingsProvider:(CDUnknownBlockType)arg2;
+ (id)pu_rowWithTitle:(id)arg1 settingsProvider:(CDUnknownBlockType)arg2 isTransient:(_Bool)arg3;
+ (id)pu_rowWithTitle:(id)arg1 settings:(id)arg2;
+ (id)pu_rowWithTitle:(id)arg1 output:(CDUnknownBlockType)arg2;
+ (id)pu_rowWithTitle:(id)arg1 action:(CDUnknownBlockType)arg2;
+ (id)pu_rowWithTitle:(id)arg1 settings:(id)arg2 condition:(id)arg3;

- (id)pu_increment:(double)arg1;

@end
