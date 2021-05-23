/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMOutputAction.h>

@class NSString;

@interface AXMSpeechOutputAction : AXMOutputAction

{
    NSString *_text;
}

@property (nonatomic, readonly) NSString *text;

- (id)initWithText:(id)arg1;

@end
