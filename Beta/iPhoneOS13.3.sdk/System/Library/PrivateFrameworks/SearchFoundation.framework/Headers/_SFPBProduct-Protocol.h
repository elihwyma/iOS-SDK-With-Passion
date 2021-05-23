/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSString, _SFPBURL;

@protocol _SFPBProduct <Swift>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *productIdentifier;
@property (retain, nonatomic) _SFPBURL *availabilityURL;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) _Bool buyable;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
