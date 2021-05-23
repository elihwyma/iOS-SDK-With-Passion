/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@class AKTextAttributesViewController, NSString;

@interface AKFontChooserUIItemDelegate : NSObject

{
    AKTextAttributesViewController *_parentController;
}

@property (weak) AKTextAttributesViewController *parentController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)tag;
- (id)convertFont:(id)arg1;
- (void)syncFontsToUI:(id)arg1;

@end
