/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSString;

@protocol _SFPBNamedProtobufMessage <Swift>

@property (copy, nonatomic) NSData *protobufMessageData;
@property (copy, nonatomic) NSString *protobufMessageName;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
