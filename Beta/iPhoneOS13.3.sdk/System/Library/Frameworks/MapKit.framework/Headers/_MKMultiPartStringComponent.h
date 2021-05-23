/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _MKMultiPartStringComponent : NSObject

{
    NSAttributedString *_attributedString;
    struct _NSRange _originalRange;
    struct _NSRange _range;
}

@property (copy, nonatomic, readonly) NSAttributedString *attributedString;
@property (nonatomic, readonly) struct _NSRange originalRange;
@property (nonatomic) struct _NSRange range;

- (id)description;
- (id)initWithAttributedString:(id)arg1 range:(struct _NSRange)arg2;

@end
