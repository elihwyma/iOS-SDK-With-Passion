/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSMutableString, NSString;

__attribute__((visibility("hidden")))
@interface WFPDFTextContainer : NSObject

{
    NSMutableString *_string;
    struct CGAffineTransform _transform;
}

@property (retain, nonatomic) NSMutableString *string;
@property (nonatomic) struct CGAffineTransform transform;
@property (nonatomic, readonly) NSString *text;

- (id)init;
- (void)addOperator:(id)arg1;
- (long long)compareTransformToTextContainer:(id)arg1;

@end
