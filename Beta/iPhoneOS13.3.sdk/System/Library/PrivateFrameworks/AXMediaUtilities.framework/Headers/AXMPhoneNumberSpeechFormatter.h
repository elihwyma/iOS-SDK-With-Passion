/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMSpeechFormatter.h>

@class NSMutableCharacterSet;

@interface AXMPhoneNumberSpeechFormatter : AXMSpeechFormatter

{
    NSMutableCharacterSet *_groupSeperatorCharacterSet;
}

- (id)init;
- (id)speechStringForObjectValue:(id)arg1;

@end
