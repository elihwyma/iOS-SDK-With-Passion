/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface SKUIAttributedStringLayoutRequest : NSObject

{
    NSAttributedString *_attributedString;
    long long _numberOfLines;
    _Bool _wantsBaselineOffset;
    double _width;
}

@property (nonatomic, readonly) NSAttributedString *attributedString;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) _Bool wantsBaselineOffset;
@property (nonatomic) double width;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) Class layoutClass;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAttributedString:(id)arg1;

@end
