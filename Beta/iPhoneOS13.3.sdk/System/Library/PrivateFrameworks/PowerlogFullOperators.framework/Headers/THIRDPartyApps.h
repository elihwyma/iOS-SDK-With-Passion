/*
 Image: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
 */

#import <NSObject.h>

@class NSString;

@interface THIRDPartyApps : NSObject

{
    int wifiIn;
    int wifiOut;
    int cellIn;
    int cellOut;
    NSString *processName;
}

@property (retain, nonatomic) NSString *processName;
@property (nonatomic) int wifiIn;
@property (nonatomic) int wifiOut;
@property (nonatomic) int cellIn;
@property (nonatomic) int cellOut;

@end
