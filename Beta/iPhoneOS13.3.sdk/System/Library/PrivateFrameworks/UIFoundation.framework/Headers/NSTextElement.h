/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@class NSTextContentManager, NSTextRange;

@interface NSTextElement : NSObject

{
    NSTextContentManager *_textContentManager;
    NSTextRange *_elementRange;
}

@property (weak) NSTextContentManager *textContentManager;
@property (retain) NSTextRange *elementRange;

- (id)init;
- (void)dealloc;
- (id)initWithTextContentManager:(id)arg1;

@end
