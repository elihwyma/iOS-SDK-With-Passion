/*
 Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

#import <Foundation/NSObject.h>

@interface NFCReaderSession : NSObject

+ (_Bool)featureAvailable:(unsigned long long)arg1;
+ (_Bool)readingAvailable;

@end
