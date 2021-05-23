/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@protocol SFRichText <Swift>

@property (nonatomic) double starRating;
@property (copy, nonatomic) NSString *contentAdvisory;
@property (copy, nonatomic) NSArray *icons;
@property (copy, nonatomic) NSArray *formattedTextPieces;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
