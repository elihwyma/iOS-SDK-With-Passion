/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKMinimalUserInterfaceItem.h>

@class NSString, PKInk;

@interface AKMinimalInkChooserUserInterfaceItem : AKMinimalUserInterfaceItem

{
    PKInk *_ink;
}

@property (retain, nonatomic) PKInk *ink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
