/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PLBBTelephonyDsdsRegMsg : NSObject

{
    int _dataIndicator;
    int _dataAttached;
    int _dataActive;
    int _isHome;
    NSString *_operatorName;
    NSString *_status;
}

@property int dataIndicator;
@property int dataAttached;
@property int dataActive;
@property (retain) NSString *operatorName;
@property int isHome;
@property (retain) NSString *status;

- (id)init;

@end
