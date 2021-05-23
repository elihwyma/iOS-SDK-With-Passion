/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/Swift-Protocol.h>

@class NSDictionary, NSTextStorage;

@protocol AKTextAnnotationProtocol <Swift>

@property (retain) NSTextStorage *annotationText;
@property (copy) NSDictionary *typingAttributes;
@property _Bool isEditingText;
@property _Bool textIsFixedWidth;
@property _Bool textIsFixedHeight;
@property _Bool textIsClipped;
@property _Bool shouldUsePlaceholderText;

@end
