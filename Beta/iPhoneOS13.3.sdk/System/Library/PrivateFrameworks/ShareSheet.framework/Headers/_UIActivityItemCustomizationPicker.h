/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <ShareSheet/_UIActivityItemCustomization.h>

@class NSArray, NSString;

@interface _UIActivityItemCustomizationPicker : _UIActivityItemCustomization

{
    long long _selectedOptionIndex;
    long long _previousSelectedOptionIndex;
    NSArray *_optionTitles;
    CDUnknownBlockType __handler;
}

@property (copy, nonatomic, setter=_setHandler:) CDUnknownBlockType _handler;
@property (nonatomic, readonly) NSArray *_optionTitles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long selectedOptionIndex;
@property (nonatomic, readonly) long long previousSelectedOptionIndex;

- (void)_setSelectedOptionIndex:(long long)arg1;
- (id)initWithIdentifier:(id)arg1 optionTitles:(id)arg2 selectedOptionIndex:(long long)arg3 footerText:(id)arg4;

@end
