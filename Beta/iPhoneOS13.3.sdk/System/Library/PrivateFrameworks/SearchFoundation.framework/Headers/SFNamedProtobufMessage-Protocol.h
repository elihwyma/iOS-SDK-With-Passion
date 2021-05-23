/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol SFNamedProtobufMessage <Swift>

@property (copy, nonatomic) NSData *protobufMessageData;
@property (copy, nonatomic) NSString *protobufMessageName;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
