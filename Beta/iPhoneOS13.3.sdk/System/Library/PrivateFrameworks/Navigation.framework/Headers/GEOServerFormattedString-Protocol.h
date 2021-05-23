/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/Swift-Protocol.h>

@class NSArray;

@protocol GEOServerConditionalString;

@protocol GEOServerFormattedString <Swift>

@property (nonatomic, readonly) NSArray *formatStrings;
@property (nonatomic, readonly) NSArray *formatTokens;
@property (nonatomic, readonly) NSArray *separators;
@property (nonatomic, readonly) NSArray *formatStyles;
@property (nonatomic, readonly) id <GEOServerConditionalString> alternativeString;

@end
