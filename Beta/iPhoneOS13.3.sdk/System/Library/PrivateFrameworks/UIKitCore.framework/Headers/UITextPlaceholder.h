/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, _UITextPlaceholderAttachment;

@interface UITextPlaceholder : NSObject

{
    NSArray *_rects;
    _UITextPlaceholderAttachment *_attachment;
}

@property (copy, nonatomic) NSArray *rects;
@property (retain, nonatomic) _UITextPlaceholderAttachment *attachment;

- (id)init;

@end
