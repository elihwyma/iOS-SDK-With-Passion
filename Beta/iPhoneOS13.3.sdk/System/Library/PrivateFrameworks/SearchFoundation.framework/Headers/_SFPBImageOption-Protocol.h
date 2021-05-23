/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSString, _SFPBStringDictionary;

@protocol _SFPBImageOption <Swift>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *defaultValue;
@property (retain, nonatomic) _SFPBStringDictionary *options;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
