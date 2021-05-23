/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary;

@protocol SFTextColumnSection <Swift>

@property (copy, nonatomic) NSArray *textLines;
@property (nonatomic) _Bool textNoWrap;
@property (nonatomic) unsigned long long textWeight;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
