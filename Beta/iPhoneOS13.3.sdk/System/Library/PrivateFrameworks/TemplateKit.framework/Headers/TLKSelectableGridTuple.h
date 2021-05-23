/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@class NSString;

@interface TLKSelectableGridTuple

{
    NSString *_title;
    NSString *_subtitle;
    double _size;
}

@property (nonatomic) double size;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;

+ (id)tupleWithTitle:(id)arg1 subtitle:(id)arg2;
+ (id)tuplesForTitles:(id)arg1 subtitles:(id)arg2;

- (id)description;

@end
