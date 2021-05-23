/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class NSMutableAttributedString;

@interface EKParticipantForDisplay : NSObject

{
    _Bool _optionalParticipant;
    NSMutableAttributedString *_displayString;
}

@property (retain, nonatomic) NSMutableAttributedString *displayString;
@property (nonatomic, getter=isOptionalParticipant) _Bool optionalParticipant;

@end
