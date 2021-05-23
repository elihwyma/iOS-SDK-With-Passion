/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@class NSString, NUISizeCache;

__attribute__((visibility("hidden")))
@interface TLKGridImageItem

{
    unsigned long long row;
    double horizontalHuggingPriority;
    double horizontalCompressionResistance;
    NUISizeCache *sizeCache;
    struct _NSRange columnRange;
    struct CGRect frame;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct CGRect frame;
@property (nonatomic) struct _NSRange columnRange;
@property (nonatomic) unsigned long long row;
@property (nonatomic) double horizontalHuggingPriority;
@property (nonatomic) double horizontalCompressionResistance;
@property (retain, nonatomic) NUISizeCache *sizeCache;

- (struct CGSize)sizeForTargetSize:(struct CGSize)arg1;

@end
