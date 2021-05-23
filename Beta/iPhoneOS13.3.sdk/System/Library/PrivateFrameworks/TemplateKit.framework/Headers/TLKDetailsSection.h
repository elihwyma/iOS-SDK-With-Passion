/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@class NSArray, TLKMultilineText;

@interface TLKDetailsSection

{
    TLKMultilineText *_title;
    NSArray *_details;
}

@property (retain, nonatomic) TLKMultilineText *title;
@property (retain, nonatomic) NSArray *details;

@end
