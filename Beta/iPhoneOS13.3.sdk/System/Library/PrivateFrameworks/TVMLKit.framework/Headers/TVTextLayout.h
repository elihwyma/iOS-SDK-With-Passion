/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/TVViewLayout.h>

@class NSString;

@interface TVTextLayout : TVViewLayout

{
    NSString *_textHighlightStyle;
}

@property (copy, nonatomic) NSString *textHighlightStyle;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;

@end
