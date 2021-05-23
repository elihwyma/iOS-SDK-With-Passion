/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMSpeechFormatter.h>

@interface AXMSpeechBlockFormatter : AXMSpeechFormatter

{
    CDUnknownBlockType _formattingBlock;
}

@property (copy, nonatomic) CDUnknownBlockType formattingBlock;

- (id)stringForObjectValue:(id)arg1;
- (id)initWithFormattingBlock:(CDUnknownBlockType)arg1;

@end
