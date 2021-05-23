/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class SGMFoundInAppsICS;

@interface SGSuggestionsICSMetrics : NSObject

{
    SGMFoundInAppsICS *_foundInAppsICS;
}

@property (retain, nonatomic) SGMFoundInAppsICS *foundInAppsICS;

+ (id)instance;
+ (void)recordWithTimezoneValue:(struct SGMFoundInAppsICSTZValue_)arg1 datetimeType:(struct SGMFoundInAppsDatetimeType_)arg2;

- (id)init;

@end
