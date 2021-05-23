/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSData, NSString;

@protocol _CPDeviceContext <Swift>

@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *deviceModel;
@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) NSString *osVersion;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
