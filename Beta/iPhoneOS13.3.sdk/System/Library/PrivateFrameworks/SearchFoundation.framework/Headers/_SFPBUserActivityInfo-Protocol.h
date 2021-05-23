/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSString, _SFPBURL;

@protocol _SFPBUserActivityInfo <Swift>

@property (nonatomic) int valueType;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *stringValue;
@property (retain, nonatomic) _SFPBURL *urlValue;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
