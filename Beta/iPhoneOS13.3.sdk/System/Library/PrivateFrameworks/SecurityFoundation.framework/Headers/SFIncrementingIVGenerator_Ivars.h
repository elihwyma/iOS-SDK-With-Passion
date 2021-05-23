/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableData;

@interface SFIncrementingIVGenerator_Ivars : NSObject

{
    NSMutableData *messageID;
    unsigned long long numBytesRolled;
}

@end
