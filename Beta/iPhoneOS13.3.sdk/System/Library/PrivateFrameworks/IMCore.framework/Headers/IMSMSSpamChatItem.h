/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMTranscriptChatItem.h>

@class NSString;

@interface IMSMSSpamChatItem : IMTranscriptChatItem

{
    NSString *_extensionName;
}

@property (nonatomic, readonly) NSString *extensionName;

- (id)_initWithItem:(id)arg1 withExtensionName:(id)arg2;

@end
