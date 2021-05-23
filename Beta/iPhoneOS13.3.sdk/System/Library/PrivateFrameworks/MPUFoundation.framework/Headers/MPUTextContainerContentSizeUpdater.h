/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol MPUTextContainer;

@interface MPUTextContainerContentSizeUpdater : NSObject

{
    id <MPUTextContainer> _textContainer;
    NSString *_lastSeenPreferredContentSizeCategory;
}

@property (retain, nonatomic) NSString *lastSeenPreferredContentSizeCategory;
@property (weak, nonatomic) id <MPUTextContainer> textContainer;

- (id)init;
- (void)dealloc;
- (void)_preferredContentSizeCategoryDidChange:(id)arg1;
- (void)_updateTextStyleFonts;
- (void)ensureTextStyleFontsMatchPreferredTextStyleFonts;

@end
