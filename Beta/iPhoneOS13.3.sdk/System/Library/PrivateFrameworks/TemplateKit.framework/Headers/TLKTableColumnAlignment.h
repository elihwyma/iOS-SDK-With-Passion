/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKTableColumnAlignment

{
    _Bool _isEqualWidth;
    unsigned long long _columnAlignment;
    long long _dataAlignment;
}

@property (nonatomic) unsigned long long columnAlignment;
@property (nonatomic) long long dataAlignment;
@property (nonatomic) _Bool isEqualWidth;

- (id)description;
- (long long)textAlignment;

@end
