/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface TPSDuetDataProviderResult : NSObject

{
    NSString *_identifier;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;

@end
