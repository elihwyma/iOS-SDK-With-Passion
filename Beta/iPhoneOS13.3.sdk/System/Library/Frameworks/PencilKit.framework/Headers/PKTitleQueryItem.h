/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PKTitleQueryItem : NSObject

{
    NSString *_transcribedTitle;
    struct CGRect _bounds;
}

@property (nonatomic, readonly) NSString *transcribedTitle;
@property (nonatomic, readonly) struct CGRect bounds;

- (id)initWithTranscribedTitle:(id)arg1 bounds:(struct CGRect)arg2;

@end
