/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

@protocol UITextFormattingCoordinatorDelegate;

@interface UITextFormattingCoordinator : NSObject <Swift>

{
    id <UITextFormattingCoordinatorDelegate> _delegate;
}

@property (weak, nonatomic) id <UITextFormattingCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)textFormattingCoordinatorForWindowScene:(id)arg1;
+ (_Bool)isFontPanelVisible;
+ (void)toggleFontPanel:(id)arg1;

- (id)initWithWindowScene:(id)arg1;
- (void)updateTextAttributesWithConversionHandler:(CDUnknownBlockType)arg1;
- (void)fontPickerViewControllerDidPickFont:(id)arg1;
- (void)setSelectedAttributes:(id)arg1 isMultiple:(_Bool)arg2;

@end
