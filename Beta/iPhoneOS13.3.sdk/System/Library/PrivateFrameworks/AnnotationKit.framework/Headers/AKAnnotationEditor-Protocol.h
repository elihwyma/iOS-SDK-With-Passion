/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/Swift-Protocol.h>

@class AKAnnotation, AKAnnotationTheme, AKPageController, IMTheme;

@protocol AKAnnotationEditorDelegate;

@protocol AKAnnotationEditor <Swift>

@property (weak, nonatomic) id <AKAnnotationEditorDelegate> delegate;
@property (retain, nonatomic) AKAnnotation *annotation;
@property (retain, nonatomic) AKPageController *annotationPageController;
@property (retain, nonatomic) AKAnnotationTheme *annotationTheme;
@property (nonatomic) _Bool editsOnLaunch;
@property (retain, nonatomic) IMTheme *theme;

- (unsigned short)hide;

@end
