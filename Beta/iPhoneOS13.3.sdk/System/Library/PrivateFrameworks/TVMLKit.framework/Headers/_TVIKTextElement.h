/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <ITMLKit/IKTextElement.h>

@class NSAttributedString;

@interface _TVIKTextElement : IKTextElement

{
    NSAttributedString *_cachedAttributedString;
}

@property (copy, nonatomic) NSAttributedString *cachedAttributedString;

- (void)dealloc;
- (void)_stylesMarkedDirtyNotification:(id)arg1;

@end
