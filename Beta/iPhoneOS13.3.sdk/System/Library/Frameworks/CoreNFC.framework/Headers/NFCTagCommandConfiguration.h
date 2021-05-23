/*
 Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

#import <Foundation/NSObject.h>

#import <CoreNFC/Swift-Protocol.h>

@interface NFCTagCommandConfiguration : NSObject <Swift>

{
    unsigned long long _maximumRetries;
    double _retryInterval;
}

@property (nonatomic) unsigned long long maximumRetries;
@property (nonatomic) double retryInterval;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
