/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface PLBBCodes : NSObject

{
    NSArray *_allMav_LogCodes;
    NSArray *_Mav5_7_LogCodes;
    NSArray *_Mav5_7_Lite_LogCodes;
    NSArray *_Mav7_LogCodes;
}

@property (retain) NSArray *allMav_LogCodes;
@property (retain) NSArray *Mav5_7_LogCodes;
@property (retain) NSArray *Mav5_7_Lite_LogCodes;
@property (retain) NSArray *Mav7_LogCodes;

- (id)init;
- (id)getLogCodesForMav:(id)arg1 AndType:(id)arg2;
- (id)getEventCodesForMav:(id)arg1 AndType:(id)arg2;

@end
