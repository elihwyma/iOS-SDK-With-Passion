/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSData.h>

@interface NSData (ManagedConfiguration)

+ (id)MCDataWithHexString:(id)arg1;
+ (id)MCDataWithCFData:(struct __CFData *)arg1;
+ (id)MCDataFromFile:(id)arg1;

- (id)MCHexString;
- (id)MCSHA1Hash;

@end
