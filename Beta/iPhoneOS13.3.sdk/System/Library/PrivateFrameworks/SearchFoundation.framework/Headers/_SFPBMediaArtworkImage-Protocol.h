/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSString;

@protocol _SFPBMediaArtworkImage <Swift>

@property (copy, nonatomic) NSString *persistentID;
@property (copy, nonatomic) NSString *spotlightIdentifier;
@property (nonatomic) int mediaEntityType;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
