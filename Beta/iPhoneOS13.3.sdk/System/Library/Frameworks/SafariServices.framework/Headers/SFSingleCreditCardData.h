/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <WebUI/WBSSingleCreditCardData.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SFSingleCreditCardData : WBSSingleCreditCardData

{
    NSString *_headerText;
    NSString *_displayText;
}

@property (copy, nonatomic, readonly) NSString *headerText;
@property (copy, nonatomic, readonly) NSString *displayText;

- (id)initWithHeaderText:(id)arg1 displayText:(id)arg2 type:(long long)arg3 value:(id)arg4;

@end
