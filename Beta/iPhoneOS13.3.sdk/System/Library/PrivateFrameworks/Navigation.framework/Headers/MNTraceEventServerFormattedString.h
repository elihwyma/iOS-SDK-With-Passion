/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol GEOServerConditionalString;

__attribute__((visibility("hidden")))
@interface MNTraceEventServerFormattedString : NSObject

{
    NSArray *_formatStrings;
    NSArray *_formatTokens;
    NSArray *_separators;
    NSArray *_formatStyles;
    id <GEOServerConditionalString> _alternativeString;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *formatStrings;
@property (nonatomic, readonly) NSArray *formatTokens;
@property (nonatomic, readonly) NSArray *separators;
@property (nonatomic, readonly) NSArray *formatStyles;
@property (nonatomic, readonly) id <GEOServerConditionalString> alternativeString;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFormatStrings:(id)arg1 formatTokens:(id)arg2 separators:(id)arg3;

@end
