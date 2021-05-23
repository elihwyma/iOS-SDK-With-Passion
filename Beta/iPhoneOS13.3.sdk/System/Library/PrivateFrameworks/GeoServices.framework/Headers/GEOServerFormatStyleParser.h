/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface GEOServerFormatStyleParser : NSObject

{
    NSString *_string;
    NSMutableArray *_styleNames;
    NSMutableArray *_styleRanges;
    NSMutableArray *_tokenRanges;
    NSArray *_results;
    NSMutableArray *_openStyleNames;
    NSMutableArray *_openStyleLocations;
    _Bool _parsed;
}

@property (nonatomic, readonly) NSArray *styles;
@property (nonatomic, readonly) NSArray *tokenRanges;

- (id)init;
- (id)initWithString:(id)arg1;
- (void)_parse;
- (void)_parseIfNeeded;
- (struct _NSRange)rangeForStyleAtIndex:(unsigned long long)arg1;
- (void)enumerateStylesWithBlock:(CDUnknownBlockType)arg1;
- (void)_removeTokensFromAttributedString:(id)arg1;
- (_Bool)_handleOpeningResult:(id)arg1;
- (_Bool)_handleClosingResult:(id)arg1;
- (void)enumerateTokenRangesForRemoval:(CDUnknownBlockType)arg1;
- (id)attributedStringWithStyleAttributes:(id)arg1 defaultAttributes:(id)arg2;

@end
