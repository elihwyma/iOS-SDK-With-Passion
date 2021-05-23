/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDictionary;

@protocol SFJSONSerializable <Swift>

@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;

@end
