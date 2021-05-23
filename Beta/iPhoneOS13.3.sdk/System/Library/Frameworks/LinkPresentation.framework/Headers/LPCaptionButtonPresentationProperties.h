/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface LPCaptionButtonPresentationProperties : NSObject

{
    NSString *_text;
    CDUnknownBlockType _callback;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) CDUnknownBlockType callback;

@end
