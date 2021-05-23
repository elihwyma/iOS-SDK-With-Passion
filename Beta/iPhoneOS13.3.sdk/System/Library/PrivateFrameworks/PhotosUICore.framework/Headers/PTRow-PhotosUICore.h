/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PrototypeTools/PTRow.h>

@interface PTRow (PhotosUICore)

+ (id)px_rowWithTitle:(id)arg1 output:(CDUnknownBlockType)arg2;
+ (id)px_rowWithTitle:(id)arg1 continuousOutputProducer:(CDUnknownBlockType)arg2;
+ (id)px_rowWithTitle:(id)arg1 postDismissalAction:(CDUnknownBlockType)arg2;
+ (id)px_rowWithTitle:(id)arg1 valueKeyPath:(id)arg2 condition:(id)arg3;
+ (id)px_rowWithTitle:(id)arg1 asynchronousOutputProducer:(CDUnknownBlockType)arg2;
+ (id)px_rowWithTitle:(id)arg1 action:(CDUnknownBlockType)arg2;

- (id)px_increment:(double)arg1;
- (id)px_conditionFormat:(id)arg1 possibleValues:(id)arg2;

@end
