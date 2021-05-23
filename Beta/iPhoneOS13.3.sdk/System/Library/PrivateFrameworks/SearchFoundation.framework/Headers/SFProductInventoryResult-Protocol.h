/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@protocol SFProductInventoryResult <Swift>

@property (copy, nonatomic) NSString *productIdentifier;
@property (copy, nonatomic) NSArray *availability;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
