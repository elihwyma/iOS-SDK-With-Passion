/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <MessageUI/MFComposeRecipient.h>

@class NSString;

@interface MFCalendarComposeRecipient : MFComposeRecipient

{
    NSString *_calAttendeeName;
    id _participant;
}

@property (retain, nonatomic) id participant;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)displayString;
- (id)initWithComposeRecipient:(id)arg1;
- (void)setCalAttendeeName:(id)arg1;

@end
