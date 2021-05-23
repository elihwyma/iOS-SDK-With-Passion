/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary;

@protocol SFTableAlignmentSchema <Swift>

@property (copy, nonatomic) NSArray *tableColumnAlignment;
@property (copy, nonatomic) NSDictionary *metadata;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
