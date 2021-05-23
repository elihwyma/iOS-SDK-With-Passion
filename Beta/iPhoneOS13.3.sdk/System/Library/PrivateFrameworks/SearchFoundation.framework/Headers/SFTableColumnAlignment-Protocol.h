/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDictionary;

@protocol SFTableColumnAlignment <Swift>

@property (nonatomic) int columnAlignment;
@property (nonatomic) int dataAlignment;
@property (nonatomic) _Bool isEqualWidth;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
