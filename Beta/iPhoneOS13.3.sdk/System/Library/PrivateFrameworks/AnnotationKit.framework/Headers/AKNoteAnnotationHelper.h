/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@interface AKNoteAnnotationHelper : NSObject

+ (struct CGRect)_boundsForClosedPopupAnnotation:(id)arg1 havingParent:(id)arg2 onPageController:(id)arg3;
+ (struct CGRect)_boundsForOpenPopupAnnotation:(id)arg1 withClosedBounds:(struct CGRect)arg2 havingParent:(id)arg3 onPageController:(id)arg4;
+ (id)newPopupAnnotationWithParent:(id)arg1 onPageController:(id)arg2;

@end
