/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary;

@protocol SFApiResults <Swift>

@property (nonatomic) int status;
@property (nonatomic) int resultType;
@property (copy, nonatomic) NSArray *flights;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
